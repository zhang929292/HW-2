#include "solution.h"
#include <iostream>

int Solution::IntSwapRef(int& num1, int& num2) { 
  if (num1 == num2){
    return 0;

  }else{
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }
  return 0;
}

void Solution::swap_point(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;

  return;
}

