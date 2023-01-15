/*!
*\author Anath
*\date January 2023
*/

#include <iostream>
#define NUM 1
#define SQUARE(x) x * x


int main()
{
    int x{5};
    std::cout << "Number: " << NUM << std::endl;
    std::cout << "Square of " << x << ": " << SQUARE(5) << std::endl;
    return 0;
}