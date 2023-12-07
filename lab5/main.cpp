#include <iostream>
#include <map>

#include "lab5/include/Allocator.h"
#include "lab5/include/Queue.h"
#include "lab5/src/Queue.cpp"

using namespace allocator;
using namespace containers;

using map_with_my_alloc = std::map<int, int, std::less<int>, Allocator<std::pair<const int, int>>>;
using queue_with_my_alloc = Queue<int>;

int factorial(int n) {
   return (n == 0) ? 1 : n * factorial(n - 1);
}

int main(int argv, char** argc) {
   map_with_my_alloc map;
   
   for (int i = 0; i != 10; ++i) {
      map[i] = factorial(i);
   }

   for (const auto& pair: map) {
      std::cout << pair.first << " " << pair.second << std::endl;
   }

   queue_with_my_alloc queue;
   
   for (int i = 0; i != 20; ++i) {
      queue.push(i);
   }

   while (!queue.empty()) {
      std::cout << queue.front() << " ";
      queue.pop();
   }
   std::cout << std::endl;

   return 0;
}