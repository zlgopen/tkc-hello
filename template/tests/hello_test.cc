
#include "gtest/gtest.h"
#include "hello.h"

TEST(Foo, basic) {
  ASSERT_EQ(hello(1, 2), 3);
}

