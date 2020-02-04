#include "src/lib/solution.h"
#include "gtest/gtest.h"

TEST(Should, Return1) {
  Solution solution;
  string x = "ABCD"; 
  int i = 0; 
  int j = 2;
  solution.indexSwap(x, i, j);
  string actual = x;
  string expected = "CBAD";
  EXPECT_EQ(expected, actual);
}
TEST(Should, Return2) {
  Solution solution;
  string x = "EE599"; 
  solution.reverse_string(x);
  string actual = x;
  string expected = "995EE";
  EXPECT_EQ(expected, actual);
}

TEST(Should, Return3) {
  Solution solution;
  string x = "ABCD"; 
  solution.tolower_string(x);
  string actual = x;
  string expected = "abcd";
  EXPECT_EQ(expected, actual);
}