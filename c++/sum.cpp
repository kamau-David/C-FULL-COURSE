#include <iostream>
using namespace std;

int main(){
    int count =1, sum=0;

    while (count <=10)
    {
    sum += count;
    count = count + 1;
}

cout<< "the sum of 1 to 10 is "<< sum <<endl;
    return 0;
}