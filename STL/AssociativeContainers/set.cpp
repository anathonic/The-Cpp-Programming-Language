/*!
*\author Anath
*\date January 2023
*/

#include <iostream>
#include <set>

int main()
{
    std::set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(9);
    s.insert(4);
    s.insert(2);
    s.insert(6);
    s.insert(8);
    s.insert(5);
    s.insert(7);
    std::cout << "Set: ";
    for (auto& str : s) {
        std::cout << str << ' ';
    }
    std::cout << std::endl;
    s.insert(9);
    s.insert(9);
    s.insert(9);
    std::string state;
    std::cout << "Set size: " << s.size() << std::endl;
    std::cout << "Set max size: " << s.max_size() << std::endl;
    state = (s.count(5) == 1) ? "True":"False";
    std::cout << "Set contain value 5: " << state << std::endl;
    state = (s.count(10) == 1) ? "True":"False";
    std::cout << "Set contain value 10: " << state << std::endl;
    return 0;
}