#include<iostream>
using namespace std;

int main(){
    int num,m;
    cout<<"Enter any three digit no. :";
    cin>>num;
    while (num>0)
    {
        m=num%10;
        cout<<m;
        num=num/10;
    }
    return 0;
}