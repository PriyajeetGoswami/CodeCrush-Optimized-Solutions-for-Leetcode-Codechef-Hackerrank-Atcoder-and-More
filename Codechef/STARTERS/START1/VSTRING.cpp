// https://www.codechef.com/viewsolution/64854378

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
       int n,c;
       cin >> n >> c ;
       string s;
       cin>>s;
       vector<ll> pos;
       for(int i=0;i<n;i++)
       {
            if(s[i]=='1')
                pos.push_back(i);    
       }
       int cnt=0;
       for(int i=0;i+1<pos.size();i++)
       {
            if(pos[i+1]-pos[i]-1>c)
                cnt++;
       }
        if(!pos.empty() and (n - pos.back() - 1 + pos[0])>c)
            cnt++;
        if(cnt<=1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
            
    }
  return 0;
}