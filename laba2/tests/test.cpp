#include "../Twelve/twelve.h"
#include "gtest/gtest.h"

#include <iostream>

using namespace pepe;

TEST(twelveTest, ConstructorTest) {
    twelve a = {11, 1, 10};
    twelve b = std::string("a1b");
    twelve c = {1, 1, 1};
    twelve d(3, 1);
    
    EXPECT_EQ(a, b);
    EXPECT_EQ(c, d);   
}

TEST(constructor_test, without_exception_test) {
    ASSERT_NO_THROW(twelve(10, '5'));
}

TEST(initializer_list_constructor_test, without_exception_test) {
    ASSERT_NO_THROW(twelve { 'b' });
}

TEST(string_constructor_test, exception_test) {
    ASSERT_THROW(twelve { "1h93j" }, std::invalid_argument);
}

TEST(string_constructor_test, without_exception_test_0) {
    ASSERT_NO_THROW(twelve { "0" });
}

TEST(string_constructor_test, without_exception_test_1) {
    ASSERT_NO_THROW(twelve{ "51b35" });
}

TEST(comparison_operator_test, zero_true_test) {
    twelve first{ "0" };
    twelve second{ "0" };

    ASSERT_TRUE(first == second);
}

TEST(comparison_operator_test, true_return_1) {
    twelve first{ "1a" };
    twelve second{ "1a" };

    ASSERT_TRUE(first == second);
}

TEST(comparison_operator_test, true_return_2) {
    twelve first{ "aab" };
    twelve second{ "aab" };

    ASSERT_TRUE(first == second);
}

TEST(comparison_operator_test, false_return_1) {
    twelve first{ "41ba" };
    twelve second{ "42ba" };

    ASSERT_FALSE(first == second);
}

TEST(comparison_operator_test, false_return_2) {
    twelve first{ "413b" };
    twelve second{ "1ba341" };

    ASSERT_FALSE(first == second);
}

TEST(false_comparison_operator_test, true_return) {
    twelve first{ "0" };
    twelve second{ "1" };

    ASSERT_TRUE(first != second);
}

TEST(false_comparison_operator_test, false_return) {
    twelve first{ "1baba" };
    twelve second{ "1baba" };

    ASSERT_FALSE(first != second);
}

TEST(more_operator_test, true_return) {
    twelve first{ "ab3" };
    twelve second{ "110" };

    EXPECT_TRUE(first > second);
}

TEST(more_operator_test, false_return) {
    twelve first{ "b2a39" };
    twelve second{ "bbbbbbbaaba" };

    EXPECT_FALSE(first > second);
}

TEST(more_operator_test, equals_args) {
    twelve first{ "aa" };
    twelve second{ "aa" };

    EXPECT_FALSE(first > second);
}

TEST(less_operator_test, true_return) {
    twelve first{ "1a3" };
    twelve second{ "aaabb" };

    EXPECT_TRUE(first < second);
}

TEST(less_operator_test, false_return) {
    twelve first{ "4141b" };
    twelve second{ "ba" };

    EXPECT_FALSE(first < second);
}

TEST(less_operator_test, equals_args) {
    twelve first{ "bb" };
    twelve second{ "bb" };

    EXPECT_FALSE(first < second);
}

TEST(more_or_equal_operator_test, true_return) {
    twelve first{ "ab3" };
    twelve second{ "110" };

    EXPECT_TRUE(first >= second);
}

TEST(more_or_equal_operator_test, equals_args) {
    twelve first{ "aa" };
    twelve second{ "aa" };

    EXPECT_TRUE(first >= second);
}

TEST(less_or_equal_operator_test, true_return) {
    twelve first{ "1a3" };
    twelve second{ "aaabb" };

    EXPECT_TRUE(first <= second);
}

TEST(less_or_equal_operator_test, false_return) {
    twelve first{ "4141b" };
    twelve second{ "ba" };

    EXPECT_FALSE(first <= second);
}

TEST(less_or_equal_operator_test, equals_args) {
    twelve first{ "bb" };
    twelve second{ "bb" };

    EXPECT_TRUE(first <= second);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
