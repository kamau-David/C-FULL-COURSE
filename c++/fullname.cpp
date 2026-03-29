#include <iostream>
#include <string>

using namespace std;

int main(){
     string fullName;
     int age;
     cout<<"Enter your fullname ";
     getline(cin, fullName);
     cout<<"What's your age? ";
     cin>>age;

     cout<<"Hello "<<fullName<<"!"<<endl;
     cout<<"you are "<<age<<" years old!";

     return 0;
}