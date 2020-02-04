#include <iostream>
#include <string>
#include "src/lib/solution.h"


int main()
{
    int Arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(Arr1)/sizeof(Arr1[0]);
    std::cout <<" The number(s) of elements in the array is(are): "<< size1 << std::endl;

    char str[]= {"1234"};
    std::cout <<" The number(s) of elements in the array is(are): "<< std::strlen(str) << std::endl;

    float Arr3[] = {1.2, 3.4};
    int size2 = sizeof(Arr3)/sizeof(Arr3[0]);
    std::cout <<" The number(s) of elements in the array is(are): "<< size2 << std::endl;

    return EXIT_SUCCESS;
}