#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }

    for(int i = 2; i * i <= n; i++)
    {
        //cout << i <<  '\n';
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     cout << isPrime(n) << '\n';
     
     return 0;
}