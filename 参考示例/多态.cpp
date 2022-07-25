#include <iostream>

using namespace std;

class Shape
{
public:
    virtual double S() = 0;
    double l;
    double h;
};

class Triangle : public Shape
{
public:
    Triangle(double l0, double h0)
    {
        l = l0;
        h = h0;
    }
    virtual double S()
    {
        return l * h / 2;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(double l0, double h0)
    {
        l = l0;
        h = h0;
    }
    virtual double S()
    {
        return l * h;
    }
};

int main()
{
    Rectangle *r0 = new Rectangle(4, 6);
    Triangle *t0 = new Triangle(2, 3);

    cout << r0->S() << endl;
    cout << t0->S() << endl;
    return 0;
}
