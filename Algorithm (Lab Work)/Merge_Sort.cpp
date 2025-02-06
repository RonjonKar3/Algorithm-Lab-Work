#include<iostream>
using namespace std;

void Conquer (int arr[], int first, int mid, int last) {
    int n1 = mid - first + 1;
    int n2 = last - mid;
    int F[n1], L[n2];

    for (int i = 0; i < n1; i++)
        F[i] = arr[first + i];

    for (int j = 0; j < n2; j++)
        L[j] = arr[mid + last + j];

    int i = 0, j = 0, k = first;

    while (i < n1 && j < n2) {
        if (F[i] <= L[j]) {
            arr[k] = F[i];
            i++;
        }
        else {
            arr[k] = L[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = F[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = L[j];
        j++;
        k++;
    }
}

void Divide(int arr[], int first, int last)
{
    int mid = first + (last - first) / 2;
    if (first >= last)
    {
        return;
    }
    else
    {
        Divide(arr, first, mid);
        Divide(arr, mid+1, last);
        Conquer (arr, first, mid, last);
    }
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Values: ";
    for(int i=0; i<n; i++)
    {
      cin >> arr[i];
    }

    cout << "Original Array: ";
    for(int i=0; i<n; i++)
    {
      cout << arr[i] << " ";
    }

    Divide(arr,0, n-1);

    cout << "\nSorted Array: ";
    for(int i=0; i<n; i++)
    {
      cout << arr[i]<< " ";
    }
}
