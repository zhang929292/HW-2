#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
   string a = "12a@#2！@1";
   std::cout << solution.is_palindromes(a) << std::endl;
    return EXIT_SUCCESS;
}

