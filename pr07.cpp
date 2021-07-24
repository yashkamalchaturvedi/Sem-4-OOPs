// Write a program to demonstrate Zero Argument Constructor
#include <iostream>
using namespace std;
class construct
{
public:
	int a, b;
	construct()
	{
		a = 10;
		b = 20;
	}
};
int main()
{
	construct c;
	cout << "a: " << c.a << endl
		 << "b: " << c.b;
	return 1;
}
