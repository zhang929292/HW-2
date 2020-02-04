#include "solution.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

bool Solution::is_palindromes(string str){
	string x;
	for (int i = 0; i < str.size(); i++){
		if (isalpha(str[i]))
			x += str[i];
	}
	for (int i = 0, j = x.length()-1; i < j; i++, j--)
		if (tolower(x[i]) != tolower(x[j]))
			return false;
	return true;
	
}

