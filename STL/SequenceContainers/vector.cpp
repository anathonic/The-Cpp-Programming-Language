/*!
 *\author Anath
 *\date January 2023
 */

#include <iostream>
#include <vector>

void printSizeAndContentOfVector(std::vector <int> v)
{
    std::cout << "Size of vector: ";
    std::cout << v.size() << std::endl;
    std::cout << "Capacity : ";
    std::cout << v.capacity() << std::endl;
    std::cout << "Content: ";
    for(int i: v)
        {
            std::cout << i << " ";
        }
    std::cout<<std::endl;
}

int main()
{
    std::vector <int> v;
    printSizeAndContentOfVector(v);
    v.push_back(2);
    printSizeAndContentOfVector(v);
    v.push_back(1);
    printSizeAndContentOfVector(v);
    v.push_back(4);
    printSizeAndContentOfVector(v);
    v.push_back(5);
    printSizeAndContentOfVector(v);
    v.push_back(3);
    printSizeAndContentOfVector(v);
    v.push_back(8);
    printSizeAndContentOfVector(v);
    v.push_back(7);
    printSizeAndContentOfVector(v);
    v.push_back(6);
    std::sort(v.begin(),v.end());
    std::cout << "Content: ";
    for(int i: v)
        {
            std::cout << i << " ";
        }
    std::cout << std::endl;
    std::cout << "Element at Index 7: " << v.at(7) << std::endl;
    std::cout << "Size of vector: " << v.size() << std::endl;
    v.pop_back();
    std::cout << "Element at index " << v.size() << " removed" << std::endl;
    std::cout << "Size of vector: " << v.size() << std::endl;
    std::cout << "First element of vector: " << v.front() << std::endl;
    std::cout << "Last element of vector: " << v.back() << std::endl;
    std::cout << "Is vector empty: " << v.empty() << std::endl;
    std::cout << "Vector capacity: " << v.capacity() << std::endl;
    std::cout << "Size of vector: " << v.size() << std::endl;
    v.clear();
    std::cout << "Size of vector: " << v.size() << std::endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    printSizeAndContentOfVector(v);
    v.insert(v.begin() + 2, 3);
    printSizeAndContentOfVector(v);
    return 0;
}