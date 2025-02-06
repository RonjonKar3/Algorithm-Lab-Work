#include<iostream>
using namespace std;

struct Job
{
    int no;
    int profit;
    int deadline;
};
int main()
{
    int n;
    cout << "Enter Number of Job: ";
    cin >> n;
    cout << endl;

    Job job[n];
    for(int i=0; i<n; i++)
    {
        cout << "---Job Details " << (i+1) << "----" << endl;
        cout << "Enter Job No: ";
        cin >> job[i].no;
        cout << "Enter Job Profit: ";
        cin >> job[i].profit;
        cout << "Enter Job Deadline: ";
        cin >> job[i].deadline;
        cout << endl;
    }

    int maxDeadline = 0;
    for(int i=0; i<n; i++)
    {
        if(job[i].deadline > maxDeadline)
        {
            maxDeadline = job[i].deadline;
        }
    }
    cout << "\nMax Deadline: " << maxDeadline;
    cout << endl << endl;

    int slot[maxDeadline+1] = {0};
    for(int i=0; i<n; i++)
    {
      for(int j=maxDeadline; j>0; j--)
      {
        if(slot[j] == 0)
        {
            slot[j] = job[i].no;
            cout << "Slot: " << slot[j] << endl;
            cout << "Job No: " << job[i].no << endl;
            cout << "Job Profit: "<< job[i].profit << endl;
            cout << "Job Job Deadline: " << job[i].deadline << endl;
            cout << endl;
            break;
        }
      }
    }
}
