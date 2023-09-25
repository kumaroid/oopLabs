#include <gtest/gtest.h>
#include "lab1.cpp"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(result("0 0 0 ") == "0");

    
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(result("10 20 30") == "2531");
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(result("aabacbaa") == "bbabcabb");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}