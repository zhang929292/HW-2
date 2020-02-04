#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Should, Return) {
  Solution solution;
  int num1 = 20;
  int num2 = 10;
  int actual1 = num2;
  int actual2 = num1;
  EXPECT_EQ(10, actual1);
  EXPECT_EQ(20, actual2);
}
