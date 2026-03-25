#include <gtest/gtest.h>
#include "hello.hpp"

TEST(HelloTest, ReturnsGreeting) {
    EXPECT_EQ(hello("Thomas"), "Hallo, Thomas!");
}

TEST(HelloTest, HandlesEmptyName) {
    EXPECT_EQ(hello(""), "Hallo, !");
}
