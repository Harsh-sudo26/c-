#include <iostream>
using namespace std;

class name{
    public:
    string name;

};
int main(){
    name n;
    cout << n.name << endl;
    cin >> n.name;
    cout <<"your name is"<<n.name;
}