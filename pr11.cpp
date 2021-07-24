#include <iostream>
using namespace std;
class MyClass
{
private:
    const int x;

public:
    MyClass(int a) : x(a)
    {
        //constructor
    }
    void show_x()
    {
        cout << "Value of constant x: " << x;
    }
};
int main()
{
    MyClass ob1(40);
    ob1.show_x();
}