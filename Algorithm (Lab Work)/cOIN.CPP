#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Coin: ";
    cin >> n;
    int arr[n];

    cout << "Enter "<< n << " Coins: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Coin List: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    int v,number;
    cout << "\nEnter Maximum Value: ";
    cin >> v;

    for(int i=0; i<n; i++)
    {
        if (arr[i] > 0)
        {
            number = v / arr[i];
            cout << arr[i] << " needs: "<< number << endl;

            v = v - (arr[i]*number);
        }
    }
}

