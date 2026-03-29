#include <iostream>
using namespace std;

int main (){
    int choice = 2;
    switch (choice)
    {
    case 1:
        cout<<"you picked option 1";
        break;
    case 2:
    cout<<"you picked option 2"<<endl;
    break;
    default:
    cout<<"select a valid option";
        break;
    }
}