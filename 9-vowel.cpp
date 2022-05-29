#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character :";
    cin>>ch;
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
       cout <<"You have entered a vowel";
    }else
    {
        cout<<"You have entered a consonant";
    }
    
    
    return 0;
}