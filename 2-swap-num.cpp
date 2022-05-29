#include <iostream>
using namespace std;

int main(){
    int a=10,b=20;
    cout<<"A= "<<a<<endl;
    cout<<"B= "<<b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After Swaping the numbers are:"<<endl;
    cout<<"A= "<<a<<endl;
    cout<<"B= "<<b<<endl;
    return 0;
}