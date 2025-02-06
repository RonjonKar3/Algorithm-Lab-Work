#include<iostream>
using namespace std;

int conquer (int arr[], int p, int mid, int r)
{
    int n1 = mid-p+1;
    int n2 = r-mid;
    int L[n1], R[n2];

    for(int i=0; i<n1; i++)
    {
        L[i] = arr[p+i];
    }

    for(int i=0; i<n2; i++)
    {
        R[i] = arr[mid+1+i];
    }

    int i=0,j=0, k=p;

    while(i<n1 && j<n2)
    {
        if(L[i] >= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

int divided (int arr[], int p, int r)
{
   if(p<r)
    {
    int mid = p+ (r - p)/2;
    divided (arr, p, mid);
    divided (arr, mid+1, r);

    conquer(arr, p, mid, r);
    }
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Values: ";

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for (int i=0; i<n; i++)
    {
        cout << arr[i]<< " ";
    }

    divided(arr, 0, n-1);

    cout << "Sorted Array: ";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

