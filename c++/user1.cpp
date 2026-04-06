#include <iostream>

using namespace std;

int main(){
    int sum =0, val;

    cout<< "enter a number that you would like to see its sum from 1 ";
    cin>>val;

    for(int i =1; i<=val; i++){
        sum += i;
    }

    cout<<"The sum of 1 to  "<<val<<" is " <<sum<< endl;
    return 0;
}