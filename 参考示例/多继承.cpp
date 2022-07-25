#include <iostream>

using namespace std;

class A
{
public:
    A(int v)
    {
        cout << "A" << endl;
        value = v;
    }

    int value;

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

class C : public A, public B
{
public:
    C() : A(1)
    {
        cout << "C" << endl;
    }

protected:
private:
};

int main()
{
    C *c0 = new C();
    cout << c0->value << endl;
    return 0;
}
