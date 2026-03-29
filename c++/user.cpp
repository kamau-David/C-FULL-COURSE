#include <iostream>
using namespace std;

int main(){
    int count =1, sum=0, val;

    cout<<"enter a value to where you need the sum calculation"<<endl;
    cin>>val;

    while (count <=val)
    {
    sum += count;
    count = count + 1;
}

cout<< "the sum of 1 to  "<< val<<" is " <<sum <<endl;
    return 0;
}