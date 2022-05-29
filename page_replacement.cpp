#include <iostream>
using namespace std;

int main()
{
    string str;
    int size = 0, hit = 0, length = 0, flag = 0,k=0;
    cout << "Enter your string: ";
    cin >> str;
    length = str.length();
    cout << "Enter no. of frames: ";
    cin >> size;
    char frame[size];
    frame[0] = ' ';
    frame[1] = ' ';
    frame[2] = ' ';
    for (int i = 0; i < length; i++)
    {
        for (int j=0; j < size; j++)
        {
            if (frame[j] == str[i])
            {
                flag = 1;
            }
            cout<<"+----+"<<endl;
            cout<<"| "<<frame[j]<<"  |"<<endl;
            cout<<"+----+"<<endl;
        }
        if (flag==0)
        {
            frame[k]=str[i];
            k++;
        }else{
            flag=0;
            hit++;
        } if (k==size){
           k=0;
        }
    //  cout<<"\n\n";
    }
    cout<<"No. of hits: "<<hit<<endl;
    cout<<"No. of fauls: "<<length-hit;

    return 0;
}
