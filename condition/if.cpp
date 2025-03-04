#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "enter a number";
    cin >> a;

    cout << "enter a second number";
    cin >> b;
    if (a > b)
    {
        cout << "the value of A is greater than B";
    }
    else 
    {
        cout << "the value of B is greater than A";
    }
    
    return 0;
}