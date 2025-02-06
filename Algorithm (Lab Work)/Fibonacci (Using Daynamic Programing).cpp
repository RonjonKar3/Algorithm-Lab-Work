#include<iostream>
using namespace std;

int dp[100];

int fib(int n)
{
    if(n == 0)
    {
       return dp[n] = 0;
    }
    else if (n == 1 || n == 2)
    {
        return dp[n] = 1;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        return dp[n] = fib(n-2) + fib (n-1);
    }
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for(int i=0; i<100; i++)
{
    dp[i] = -1;
}
    cout << "Fibonacci of number " << n << " is: " << fib(n);
}
