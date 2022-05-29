#include <iostream>
using namespace std;
typedef struct
{
    int name;
    int bt;
    int wt;
    int tat;
} process;
void findWaitingTime(process *p, int n, int quantum)
{
    int *rem_bt = new int[n];
    for (int i = 0; i < n; i++)
        rem_bt[i] = p[i].bt;
    int t = 0;
    while (1)
    {
        bool done = true;
        for (int i = 0; i < n; i++)
        {
            if (rem_bt[i] > 0)
            {
                done = false;
                if (rem_bt[i] > quantum)
                {
                    t += quantum;
                    rem_bt[i] -= quantum;
                }
                else
                {
                    t = t + rem_bt[i];
                    p[i].wt = t - p[i].bt;
                    rem_bt[i] = 0;
                }
            }
        }
        if (done == true)
            break;
    }
}
void findTurnAroundTime(process *p, int n)
{
    for (int i = 0; i < n; i++)
        p[i].tat = p[i].bt + p[i].wt;
}
void findavgTime(process *p, int n, int quantum)
{
    int total_wt = 0, total_tat = 0;
    findWaitingTime(p, n, quantum);
    findTurnAroundTime(p, n);
    cout << "Processes "
         << " Burst time "
         << " Waiting time "
         << " Turn around time\n ";
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + p[i].wt;
        total_tat = total_tat + p[i].tat;
        cout << " " << i + 1 << "\t\t" << p[i].bt << "\t " << p[i].wt << "\t\t" << p[i].tat << endl;
    }
    cout << "Average waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}
int main()
{
    int n;
    cout << "Enter number of process: ";
    cin >> n;
    process *p = new process[n];
    for (int i = 0; i < n; i++)
    {
        p[i].name = i + 1;
        cout << "Enter burst time: ";
        cin >> p[i].bt;
    }
    int quantum = 2;
    findavgTime(p, n, quantum);
    return 0;
}