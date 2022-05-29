#include <iostream>
using namespace std;
typedef struct
{
    int bt;
    int wt;
    int tat;
    string name;
} process;
int main()
{
    int n, pos, total = 0;
    float totalWt = 0, totalTat = 0;
    cout << "Enter number of processes: ";
    cin >> n;
    process *p = new process[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name and burst time: ";
        cin >> p[i].name >> p[i].bt;
    }
    // sort
    for (int i = 0; i < n; i++)
    {
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (p[j].bt < p[pos].bt)
            {
                pos = j;
            }
        }
        process temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }
    p[0].wt = 0;
    p[0].tat = p[0].bt + p[0].wt;
    for (int i = 1; i < n; i++)
    {
        p[i].wt = p[i - 1].tat;
        p[i].tat = p[i].bt + p[i].wt;
    }
    cout << "Process Bt Wt Tat" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].name << " : " << p[i].bt << " " << p[i].wt
             << " " << p[i].tat << endl;
        totalWt += p[i].wt;
        totalTat += p[i].tat;
    }
    cout << "Average waiting time : " << totalWt / n << endl;
    cout << "Average turn around time : " << totalTat / n << endl;
    return 0;
}