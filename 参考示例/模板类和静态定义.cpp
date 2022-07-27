#include <iostream>
//#include <memory> 动态指针
using namespace std;

template <class T>
class Test
{
public:
    T a;
    T b;
    static int c;
    static void sf(T a);
    Test(T a0, T b0)
    {
        a = a0;
        b = b0;
    }
    void display()
    {
        /*
        error: invalid use of 'this' outside of a non-static member function
        error: invalid use of member x in static member function
        静态成员函数中不可以使用this指针
        */
        cout << a << endl;
        cout << b << endl;
        cout << c << endl; // 非静态成员函数也可以访问静态数据成员
    }
};

// 静态成员变量
template <class T>
int Test<T>::c = 1;

// 静态方法
template <class T>
void Test<T>::sf(T a)
{
    cout << a << endl;
}

int main()
{
    Test<double> *t0 = new (Test<double>)(114.514, 514.114);
    Test<int> t1(1919, 810);
    t0->display();
    t1.display();
    Test<char>::sf('w');
    return 0;
}

/*
з┃ε
━╋━
з┃ε
*/
