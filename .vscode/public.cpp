#include <iostream>
using namespace std;

class animal
{
    public :
    int legs;
    void move();
};
class mamal:public animal
{
public:

};
class birds:: public animal
{
public:

};
void animal:: move()
{
    cout<<"Animal moving";
}

int main(){
    mamal x;
    x.move();
    return 0;
}