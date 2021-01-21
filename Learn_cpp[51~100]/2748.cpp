#include <iostream>
#define MAX 90

using namespace std;

unsigned long dp[MAX];

unsigned long fibo(int n)
{
    if (n == 1 || n == 2) return 1;
    if (dp[n] != 0) return dp[n];

    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}

int main()
{
    int n;
    cin >> n; 
    printf("%ld", fibo(n));
}
