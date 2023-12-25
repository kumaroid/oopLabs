#include "include/NPC.hpp"
#include "include/Dragon.hpp"
#include "include/Knight.hpp"
#include "include/Pegas.hpp"
#include "include/Factory.hpp"
#include "include/Observers.hpp"
#include "include/DataMethods.hpp"

std::ostream& operator << (std::ostream& os, const set_t& array) {
    for (auto& elem : array) {
        elem->print();
    }
    return os;
}

std::unordered_map<NpcType, std::shared_ptr<FightVisitor>> visitors = {
    {DragonType, std::make_shared<DragonVisitor>()},
    {PegasType, std::make_shared<PegasVisitor>()},
    {KnightType, std::make_shared<KnightVisitor>()}
};

set_t fight(const set_t& array, size_t distance) {
    set_t dead_list;

    for (const auto& attacker : array) {
        for (const auto& defender : array) {
            if (attacker != defender && attacker->is_close(defender, distance) && dead_list.find(defender) == dead_list.end()) {
                bool win = defender->accept(visitors[attacker->gettype()], attacker);
                if (win) {
                    dead_list.insert(defender);
                }
            }
        }
    }

    return dead_list;
}

int main() {
    srand(time(NULL));

    set_t array;

    std::cout << "Generating ..." << std::endl;
    for (size_t i = 0; i < 40; ++i) {
        array.insert(Factory::Create(NpcType(std::rand() % 3),
        std::rand() % 500,
        std::rand() % 500));
    }

    std::cout << "Saving ..." << std::endl;
    DataMethods::save_array(array, "npc.txt");

    std::cout << "Loading..." << std::endl;
    array = DataMethods::load_array("npc.txt");

    std::cout << array;

    std::cout << "Fighting..." << std::endl << array;
    for (size_t distance = 20; distance <= 500 && !array.empty(); distance += 80) {
        auto dead_list = fight(array, distance);
        for (auto& dead : dead_list) {
            array.erase(dead);
        }
        std::cout << "Fight stats ----------" << std::endl
                  << "distance: " << distance << std::endl
                  << "killed: " << dead_list.size() << std::endl
                  << std::endl << std::endl;
    }

    std::cout << "Survivors:" << std::endl << array;

    return 0;
}