#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::sort;
using std::set;

class Solution {
public:
  void final_vector(vector<int> vct);
  vector<int> RemDupli(vector<int> &input);
  vector<int> RemDupliSet(vector<int> &input);
  vector<int> ReversedVec(vector<int> &input);
  vector<int> RemoveOdd(vector<int> &input);
  vector<int> Concatenating(vector<int> &input1, vector<int> &input2);
  vector<int> VctUnion(vector<int> &input1, vector<int> &input2);
  
};

#endif