#include <iostream>

using namespace std;

class Complex
{

private:
    double real;
    double imaginary;

public:
    Complex(double r, double i)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout << real << "+(";
        cout << imaginary << ")i" << endl;
    }
    friend Complex operator+(const Complex &num1, const Complex &num2);
    friend Complex operator-(const Complex &num1, const Complex &num2);
    friend Complex operator*(const Complex &num1, const Complex &num2);
};
Complex operator+(const Complex &num1, const Complex &num2)
{
    Complex num(0, 0);
    num.real = num1.real + num2.real;
    num.imaginary = num1.imaginary + num2.imaginary;
    return num;
}
Complex operator-(const Complex &num1, const Complex &num2)
{
    Complex num(0, 0);
    num.real = num1.real - num2.real;
    num.imaginary = num1.imaginary - num2.imaginary;
    return num;
}
Complex operator*(const Complex &num1, const Complex &num2)
{
    Complex num(0, 0);
    double a,b,c,d;
    a=num1.real;
    b=num1.imaginary;
    c=num2.real;
    d=num2.imaginary;
    num.real = a * c - b * d;
    num.imaginary = a * d + b * c;
    return num;
}
int main()
{
    Complex C0(1, 2);
    Complex C1(3, 4);
    Complex C4(0, 0);
    /*
    Complex C2(0, 0);
    Complex C3(0, 0);
    
    C0.display();
    C1.display();
    C2.display();
    C2 = C0 + C1;
    C2.display();
    C3 = C0 - C1;
    C3.display();
    
    */
    C4 = C1 * C0;
    cout << "-------" << endl;
    /*C0.display();
    C1.display();*/
    C4.display();
    return 0;
}
