#include <iostream>
using namespace std;

class add
{
public:
    int a, b;
    int result;
};
int main()
{
    add obj;
    obj.a;
    obj.b;
    obj.result;
    cout << "Enter the first number";
    cin >> obj.a;
    cout << "Enter the second number";
    cin >> obj.b;
    obj.result = obj.a + obj.b;
    cout << "your value is" <<obj.result;
    return 0;
}