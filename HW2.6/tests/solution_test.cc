#include "src/lib/solution.h"
#include "gtest/gtest.h"

TEST(palindromesShould, Returnpal1) {
  Solution solution;
  string a = "No 'x'！@ n Nixon";
  int actual = solution.is_palindromes(a);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(palindromesShould, Returnpal2) {
  Solution solution;
  string a = "12a@#2！@1";
  int actual = solution.is_palindromes(a);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}