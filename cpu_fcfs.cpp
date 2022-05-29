#include<iostream>
using namespace std;

class FCFS{
  public:
    int wt;
    int tat;
    int ct;
    int bt; 
};

int main(){
  int size;
  float avgwt=0,avgtat=0;
  cout<<"Enter the no. of pro: ";
  cin>>size;
  FCFS obj[size];
  for (int i = 0; i < size; i++)
  {
      cout<<"Enter burst time: P"<<i+1<<":";
      cin>>obj[i].bt;
  }
  //completion time
  obj[0].ct=obj[0].bt;
  for (int i = 1; i <size; i++)
  {
      obj[i].ct=obj[i-1].ct+obj[i].bt;
  }
  //tat
  for (int i = 0; i < size; i++)
  {
      obj[i].tat=obj[i].ct-i;
      avgtat+=obj[i].tat;
  }
  //waiting time
  for (int i = 0; i < size; i++)
  {
      obj[i].wt=obj[i].tat-obj[i].bt;
      avgwt+=obj[i].wt;
  }
  cout<<"AT\tBT\tCT\tTAT\tWT"<<endl;
  for (int i = 0; i < size; i++)
  {
      cout<<i<<"\t"<<obj[i].bt<<"\t"<<obj[i].ct<<"\t"<<obj[i].tat<<"\t"<<obj[i].wt<<endl;
  }
  cout<<"Average wating time: "<<avgwt/size<<endl;
  cout<<"Average Turnaround time: "<<avgtat/size<<endl;
  return 0;
}