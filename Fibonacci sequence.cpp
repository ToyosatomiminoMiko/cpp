#include <iostream>
using namespace std;

int main()
{
	int b = 1;
	int c=1;
	for (int a = 1;  a < 1000; a = a + 1)
	{
		b = a;
		a = c;
		c = a + b;
		cout << c+1 << endl;
	}
	return 0;
}
