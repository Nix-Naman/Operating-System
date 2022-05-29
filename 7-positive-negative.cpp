#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any  no. :";
    cin>>num;
    if (num>0)
    {
      cout<<"The number is positive";
    }else if (num<0){
        cout<<"The number is negative";
    }else if (num==0){
        cout<<"The number is zero";
    }
    
    return 0;
}