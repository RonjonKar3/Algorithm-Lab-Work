#include<iostream>
using namespace std;

struct Activity
{
    int start;
    int end;
};

int main()
{
   int n;
   cout << "Enter Number of Activities: ";
   cin >> n;
   cout << endl;

   Activity activity[n];

   for(int i=0; i<n; i++)
   {
       cout << "Enter Start Time for Activity " << (i + 1) << ": ";
       cin >> activity[i].start;

       cout << "Enter End Time for Activity " << (i + 1) << ": ";
       cin >> activity[i].end;
       cout << endl;
   }

   Activity temp;
   for (int j = 0; j < n - 1; j++)
   {
     for (int i = 0; i < n - j - 1; i++)
     {
        if(activity[i].end > activity[i+1].end)
        {
            temp = activity[i];
            activity[i] = activity[i+1];
            activity[i+1] = temp;
        }
     }
   }

   cout << "\nSorted by End Time: "<< endl;
   for(int i=0; i<n; i++)
   {
       cout << "(" << activity[i].start << ","<< activity[i].end << ")" << endl;
   }
    cout << endl;

    int i = 0;
    cout << "(----------Activity List-------";
    cout << "\n\nActivity time: (" << activity[i].start << "," << activity[i].end << ")" << endl;
    int c = 1;
     for(int j=1; j<n; j++)
     {
       if(activity[i].end <= activity[j].start)
       {
           cout << "Activity time: (" << activity[j].start << "," << activity[j].end << ")" << endl;
           i = j;
           c++;
       }
     }
     cout << "\nMaximum Activity: " << c;

}
