#include "src/lib/solution.h"
#include "gtest/gtest.h"


TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  string a ="eegg";
  string b ="abb";
  int actual = solution.ismap(a, b);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}