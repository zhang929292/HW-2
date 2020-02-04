#include "src/lib/solution.h"
#include "gtest/gtest.h"


// TEST(RemoveDup, ReturnRemoveDup) {
//   Solution solution;
//   vector<int> input1={1,2,2};
//   vector<int> actual=solution.RemDupli(input1);
//   vector<int> expected = {1,2};
//   EXPECT_EQ(expected, actual);
// }

// TEST(RemDupliSetet, ReturnRemDupliSet) {
//   Solution solution;
//   vector<int> inputst={1,2,2,3,3};
//   vector<int> actual=solution.RemDupliSet(inputst);
//   vector<int> expected = {1,2,3};
//   EXPECT_EQ(expected, actual);
// }
// TEST(ReversedVec, ReturnReversedVec) {
//   Solution solution;
//   vector<int> inputrv={1,2};
//   vector<int> actual=solution.ReversedVec(inputrv);
//   vector<int> expected = {2,1};
//   EXPECT_EQ(expected, actual);
// }

// TEST(RemoveOdd, ReturnRemoveOdd) {
//   Solution solution;
//   vector<int> inputro={1, 8, 8, 16};
//   vector<int> actual=solution.RemoveOdd(inputro);
//   vector<int> expected = {8, 16};
//   EXPECT_EQ(expected, actual);
// }

// TEST(Concatenating, ReturnConcatenatingo) {
//   Solution solution;
//   vector<int> inputc1={1,2,3,4};
//   vector<int> inputc2={3,4,5};
//   vector<int> actual=solution.Concatenating(inputc1,inputc2);
//   vector<int> expected = {1,2,3,4,3,4,};
//   EXPECT_EQ(expected, actual);
// }

TEST(VctUnion, ReturnVctUniono) {
  Solution solution;
  vector<int> inputU1={1,2,3,5};
  vector<int> inputU2={3,4,5};
  vector<int> actual=solution.VctUnion(inputU1,inputU2);
  vector<int> expected = {3};
  EXPECT_EQ(expected, actual);
}