#include <bits/stdc++.h>
using namespace std;

//gcd(a, b) * lcm(a, b) = a * b;

int LCM(int a, int b) //O(min(a, b))
{
    return ((a/ __gcd(a, b)) * b);
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b;
     cin >> a >> b;

     cout << LCM(a, b) << '\n';
     
     return 0;
}