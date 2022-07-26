#include <iostream>
//#include <memory>
using namespace std;

template <class T>
class Test
{
public:
    T a;
    T b;
    Test(T a0,T b0)
    {
        a = a0;
        b = b0;
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{
    Test<double> *t0 = new (Test<double>)(114.514,514.114);
    Test<int> t1(1919,810);
    t0->display();
    t1.display();
    return 0;
}

/*
з ┃ ε
━━╋━━
з ┃ ε
*/
