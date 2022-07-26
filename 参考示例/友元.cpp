#include <iostream>
// >_<
using namespace std;

class Point
{
public:
    double x;
    double y;
    Point(double x0, double y0)
    {
        x = x0;
        y = y0;
    }
    ~Point(void)
    {
        cout << "Point release." << endl;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

/*
ax+by+c=0
*/
class Linear
{
public:
    double a;
    double b;
    double c;
    Linear(double a0, double b0, double c0)
    {
        a = a0;
        b = b0;
        c = c0;
    }

    friend Point intersection(const Linear &fun1, const Linear &fun2);
};

Point intersection(const Linear &fun1, const Linear &fun2)
{
    Point *point = new Point(0, 0);
    point->x = (fun1.b * fun2.c - fun2.b * fun1.c) / (fun1.a * fun2.b - fun2.a * fun1.b);
    point->y = (fun2.a * fun1.c - fun1.a * fun2.c) / (fun1.a * fun2.b - fun2.a * fun1.b);
    return *point;
}

int main()
{
    Linear *f1 = new Linear(1, -2, 3);
    Linear *f2 = new Linear(-4, 5, -6);
    Point intersectionPoint = intersection(*f1, *f2);
    intersectionPoint.display();
    return 0;
}
