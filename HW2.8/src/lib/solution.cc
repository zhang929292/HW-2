#include "solution.h"

void Solution::Final(std::vector<int> vct){

	std::sort(vct.begin(), vct.end());

	for (int i = 0; i < vct.size(); i++)
		vct[i] = -vct[i];

	std::sort(vct.begin(), vct.begin() + vct.size()/2);
	std::sort(vct.end() - vct.size()/2, vct.end());

	for (int i = 0; i < vct.size(); i++)
		vct[i] = -vct[i];

	for (int i = 0; i < vct.size(); i++)
		std::cout << vct[i] << " ";
		std::cout << std::endl;
}

