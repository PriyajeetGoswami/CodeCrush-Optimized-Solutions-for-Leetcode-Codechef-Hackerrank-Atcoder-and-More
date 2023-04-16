// https://www.codechef.com/viewsolution/64852656

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
       vector<ll> v;
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           ll a;
           cin >> a;
           v.push_back(a);
       }
       sort(v.begin(),v.end());
       /*
       (a*b)+a-b = (a-1)*(b+1) + 1
       case I:    a is the largest +ve integer
                  b is the 2nd largest
        case II:  a is 0 and also the largest integer
                  and b is the smallest integer(which is also -ve)
        case III: b is the smallest -ve integer and
                  a is the 2nd smallest -ve integer
       */
       ll max1 = (v[n-1]-1)*(v[n-2]+1)+1;
       ll max2 = (v[n-1]-1)*(v[0]+1)+1;
       ll max3 = (v[1]-1)*(v[0]+1)+1;
       
       cout << max({max1,max2,max3}) << "\n";
    }
  return 0;
}