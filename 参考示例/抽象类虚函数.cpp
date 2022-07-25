#include <iostream>

using namespace std;

class A
{
public:
    virtual void fun() = 0;
    int value;
};

class B : public A
{
public:
    virtual void fun()
    {
        cout << "virtual function" << endl;
    }
};

int main()
{
    B *b0 = new B;
    b0->fun();
    return 0;
}
