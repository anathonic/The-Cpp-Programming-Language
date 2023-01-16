/*!
*\author Anath
*\date January 2023
*/

#include <iostream>

enum Protocol { NDCP = 1, RMAP = 2, Other = 5, Empty };

int main()
{
    Protocol protocol = Empty;
    switch(protocol)
    {
        case NDCP  : std::cout << "NDCP " << protocol << std::endl; break;
        case RMAP  : std::cout << "RMAP " << protocol << std::endl; break;
        case Other : std::cout << "Other " << protocol << std::endl; break;
        case Empty : std::cout << "Empty " << protocol << std::endl; break;
    }
    return 0;
}