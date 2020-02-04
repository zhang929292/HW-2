#include "solution.h"

void Solution::indexSwap(string& x, int i, int j){
	std::swap(x[i], x[j]);
  std::cout << x << std::endl;
}

void Solution::reverse_string(string& x){
	for (int i = 0, j = x.length()-1; i < j; i++, j--)
		indexSwap(x, i, j);
  std::cout<< x << std::endl;
}

void Solution::tolower_string(string& x){
	for (int i = 0; i < x.length(); i++){
		if ('A' <= x[i] && x[i] <= 'Z')
			x[i] = x[i] - 'A' + 'a';
	}
	std::cout <<  x << std::endl;
}
