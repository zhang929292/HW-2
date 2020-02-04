#include <iostream>
#include "src/lib/solution.h"
using std::cout;
using std::endl;
using std::vector;

int main()
{
    Solution solution ;
	vector<int> vct;

	// vector<int> input = {100, 100, 1, 8, 8, 16};
	// vct = solution.RemDupli(input);
	// solution.final_vector(vct);
	// vector<int> inputst = {100, 100, 1, 8, 8, 16};
	// vct = solution.RemDupliSet(inputst);
	// solution.final_vector(vct);


  	// solution. ReversedVec(input2);

	vector<int> inputro = {100, 100, 1, 8, 8, 16};
  	solution. RemoveOdd(inputro);
	vct = solution.RemoveOdd(inputro);
	solution.final_vector(vct);
	
	vector<int> input1c={1,2,3,4};
    vector<int> input2c={3,4,5};
  	solution. Concatenating(input1c, input2c);
	vct = solution.Concatenating(input1c, input2c);
	solution.final_vector(vct);
  

	vector<int> inputU1={1,2,3,5};
    vector<int> inputU2={3,4,5};
	vct = solution.VctUnion(inputU1, inputU2);
	solution.final_vector(vct);

   

    return EXIT_SUCCESS;
}