
#include "gtest/gtest.h"
#include "foo.h"

TEST(Foo, basic) {
  ASSERT_EQ(foo(1, 2), 3);
}

