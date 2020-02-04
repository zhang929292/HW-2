#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Test, Return) {
  Solution solution;
  std::vector<int> inputs = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  std::vector<int> actual = solution.Final(inputs);

  EXPECT_EQ(“43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99”, actual);
  
}
