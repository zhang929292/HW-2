#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int num1 = 30;
    int num2 = 10;

    solution.swap_point(&num1, &num2);
    std::cout<<"num1: "<< (num1) <<" num2: "<< (num2) <<std::endl;
    // solution.IntSwapRef(num1, num2);
    // std::cout<<"num1: "<<num1<<" num2: "<<num2<<std::endl;
     return EXIT_SUCCESS;
}