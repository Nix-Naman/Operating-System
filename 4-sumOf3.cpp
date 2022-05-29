#include<iostream>
using namespace std;

int main(){
    int num,sum=0,m;
    cout<<"Enter any three digit no. :";
    cin>>num;
    while (num>0)
    {
        m=num%10;
        sum+=m;
        num=num/10;
    }
    cout<<"The sum is : "<<sum<<endl;
    return 0;
}