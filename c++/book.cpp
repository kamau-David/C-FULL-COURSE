#include <iostream>
#include<string>
using namespace std;

int main(){
    double bookPrice;
    char firstLetter;

    cout<<"Enter the bookprice ";
    cin>> bookPrice;

    cout<< "What is the  first letter of your name? ";
    cin>>firstLetter;

    cout<< "The bookprice is $"<<bookPrice<<" and your initial is "<<firstLetter<<endl;

    return 0;
}