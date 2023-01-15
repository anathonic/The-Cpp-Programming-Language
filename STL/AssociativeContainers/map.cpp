/*!
*\author Anath
*\date January 2023
*/

#include <iostream>
#include <map>

int main()
{
    std::map <std::string,int> m;
    std::map<std::string,int>::iterator it;
    it = m.begin();
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;
    m["four"] = 4;
    m["five"] = 5;
    m["six"] = 6;
    m["seven"] = 7;
    m["eight"] = 8;
    m["nine"] = 9;
    std::cout << "Size of map: " << m.size() << std::endl;
    for (it = m.begin(); it != m.end(); ++it)
    {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
    if (m.count("four") > 0)
    {
        std::cout << "Key 'four' is in the map" << std::endl;
    }
    else
    {
        std::cout << "Key 'four' is not in the map" << std::endl;
    }
    std::map<int, int> i;
    std::map<int, int>::iterator itr;
    itr = i.begin();
    i.insert(std::pair<int, int>(1, 10));
    i.insert(std::pair<int, int>(2, 20));
    i.insert(std::pair<int, int>(3, 30));
    i.insert(std::pair<int, int>(4, 40));
    i.insert(std::pair<int, int>(5, 50));
    i.insert(std::pair<int, int>(6, 50));
    i.insert(std::pair<int, int>(6, 50));
    for (itr = i.begin(); itr != i.end(); ++itr)
    {
        std::cout << "Key: " << itr->first << ", Value: " << itr->second << std::endl;
    }
    std::cout << "Map size: " << i.size() << std::endl;
    i.erase(4);
    std::cout << "Map size: " << i.size() << std::endl;
    return 0;
}