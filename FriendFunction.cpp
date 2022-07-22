#include <iostream>
using namespace std;

class Box
{
private:
    int value;

public:
    Box(int v)
    {
        value = v;
    }

    friend int getValue(Box &box);

    ~Box(void)
    {
    }
};

int getValue(Box &box)
{
    //cout << box.value << endl;
    return box.value;
}

int main()
{
    Box *b0 = new Box(2);
    cout << getValue(*b0) << endl;
    return 0;
}
