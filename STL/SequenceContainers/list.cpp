/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>
#include <list>
#include <iterator>

void displayList(std::list <int> l, std::list<int>::iterator it){
    for (it = l.begin(); it != l.end(); ++it)
    std::cout << *it << " ";
    std::cout << std::endl;
}

int main()
{
    std::list<int> l;
    std::list<int>::iterator it;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    displayList(l,it);
    std::cout << "List size: " << l.size() << std::endl;
    l.insert(l.begin(), 1);
    std::cout << "List size: " << l.size() << std::endl;
    displayList(l,it);
    l.remove(1);
    displayList(l,it);
    l.insert(l.begin(), 1);
    displayList(l,it);
    l.reverse();
    displayList(l,it);
    return 0;
}