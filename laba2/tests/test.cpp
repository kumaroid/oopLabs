#include <../gtest/gtest.h>

#include "../Twelve/twelve.h"

#include <iostream>

using namespace pepe;

TEST(constructor_test, without_exception_test) {
    ASSERT_NO_THROW(twelve(10, '5'));
}

TEST(initializer_list_constructor_test, exception_test) {
    ASSERT_THROW(twelve { 'H' }, std::invalid_argument);
}

TEST(initializer_list_constructor_test, without_exception_test) {
    ASSERT_NO_THROW(twelve { 'B' });
}

TEST(string_constructor_test, exception_test) {
    ASSERT_THROW(twelve { "1H93J" }, std::invalid_argument);
}

TEST(string_constructor_test, without_exception_test_0) {
    ASSERT_NO_THROW(twelve { "0" });
}

TEST(string_constructor_test, without_exception_test_1) {
    ASSERT_NO_THROW(twelve{ "51B35" });