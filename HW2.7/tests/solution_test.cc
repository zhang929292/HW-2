#include "src/lib/solution.h"
#include "gtest/gtest.h"


TEST(HelloWorldShould, ReturnHelloWorld) {
  string c;
  Solution solution;
  string a ="eegg";
  string b ="abb";
  actual = solution.ismap(a, b);

  std::string expected = "{}";
  EXPECT_EQ(expected, actual);
}