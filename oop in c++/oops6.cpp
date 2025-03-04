#include <iostream>
using namespace std;

class start{
    public:
   string name;
   string address;

};

int main(){
    start ironman;    //object creating
    ironman.name;
    ironman.address;
    cout<<"Enter the name of the ironman"<<endl;
    cin >>ironman.name;
    cout<<"Entered ironman is" <<ironman.name;
    return 0;
}
