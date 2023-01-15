/*!
*\author Anath
*\date January 2023
*/

#include <iostream>

class Counter
{
public:
    Counter();
    int getValue() const
    {
        return value;
    }
    void setValue(int v)
    {
        value = v;
    }
    void increment()
    {
        ++value;
    }
    const Counter& operator++();
private:
    int value;
};

Counter::Counter() : value(0) {}
const Counter& Counter::operator++()
{
    ++value;
    return *this;
}

int main()
{
    Counter c;
    std::cout << "Value of c: " << c.getValue() << std::endl; //0
    c.increment();
    std::cout << "Value of c: " << c.getValue() << std::endl; //1
    ++c;
    std::cout << "Value of c: " << c.getValue() << std::endl; //2
    Counter a = ++c;
    std::cout << "Value of a: " << a.getValue() << std::endl; //3
    std::cout << "Value of c: " << c.getValue() << std::endl; //3
    return 0;
}