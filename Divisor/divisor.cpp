#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     vector<int>div;
     for(int i = 1; i * i <= n; i++)
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

     for(auto u : div)
     {
        cout << u << " ";
     }
     cout << '\n';
     
     return 0;
}