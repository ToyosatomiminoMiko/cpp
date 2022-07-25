#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "A" << endl;
    }

protected:
private:
};

class B
{
public:
    B()
    {
        cout << "B" << endl;
    }

protected:
private:
};

class C : public A ,public B
{
public:
    C()
    {
        cout << "C" << endl;
    }

protected:
private:
};

int main()
{
    C *c0 = new C();

    return 0;
}
