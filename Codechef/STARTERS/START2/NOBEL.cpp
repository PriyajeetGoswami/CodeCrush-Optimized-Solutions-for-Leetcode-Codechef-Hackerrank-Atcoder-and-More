// https://www.codechef.com/viewsolution/64855545

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using ll = long long;

int main ()
{
  fastio;
  ll t;
  cin >> t;
  while (t--)
    {
       int n,m;
       cin >> n >> m ;
       unordered_set<int> s;
       for(int i=0;i<n;i++)
       {
           int topic;
           cin >> topic ;
           s.insert(topic);
       }
        if(s.size()<m )
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
       
    }
  return 0;
}