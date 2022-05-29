#include<iostream>
using namespace std;

int main(){
    int arr[5],max=0;
    cout<<"Enter any  five no. :";
    for(int i=0;i<5;i++)cin>>arr[i];
    for(int i=0;i<5;i++){
        if (max<arr[i])
        {
           max=arr[i];
        }
    }
    cout<<"The greatest no is :"<<max;
    return 0;
}