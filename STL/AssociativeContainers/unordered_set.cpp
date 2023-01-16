/*!
*\author Anath
*\date January 2023
*/

#include <iostream>
#include <unordered_set>
#include <set>

int main()
{
    std::unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(9);
    s.insert(4);
    s.insert(2);
    s.insert(6);
    s.insert(8);
    s.insert(5);
    s.insert(7);
    std::cout << "Unorderd set: ";
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
    std::set<int> o(s.begin(), s.end());
    std::cout << "Ordered set: ";
    for (auto& str : o) {
        std::cout << str << ' ';
    }
    std::cout << std::endl;
    return 0;
}