#include <iostream>
#include "user.h"
using namespace std;
int main()
{   Work a;
    a.salary=120.5;
    User jhon;
    cout<<"user jhon"<<"\n"<<"cin age";
    cin>>jhon.age;
    my_fun(jhon,a);
    return 0;
}