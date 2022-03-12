
#include "gtest/gtest.h"
#include "hello.h"

TEST(hello, basic) {
  ASSERT_EQ(hello(1, 2), 3);
}

