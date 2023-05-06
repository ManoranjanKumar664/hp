#include<iostream>
using namespace std;

int main()
{
    typedef struct mano
    {
        int a;
        float f;
    }person;

    person p1;
    p1.a=40;
    p1.f=49.4;
    cout<<"data added to structure variable"<<endl;
    cout<<p1.a<<endl<<p1.f<<endl;
    return 0;

}