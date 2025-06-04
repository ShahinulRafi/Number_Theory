//https://codeforces.com/problemset/problem/762/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     long long n, k;
     cin >> n >> k;

     vector<long long>div;
     for(long long i = 1; i * i <= n; i++)
     {
        if(n%i == 0)
        {
            div.push_back(i);
            if(n / i != i)
            {
                div.push_back(n / i);
            }
        }
     }

     sort(div.begin(), div.end());
     long long ans = -1;
     for(long long i = 0; i < div.size(); i++)
     {
        if(i+1 == k) ans = div[i];
     }

     cout << ans;
     cout << '\n';
     
     return 0;
}