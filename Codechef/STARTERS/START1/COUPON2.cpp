// https://www.codechef.com/viewsolution/64849859

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
      int d,c,a1,a2,a3,b1,b2,b3;
      cin >> d >> c 
        >> a1 >> a2 >> a3 
        >> b1 >> b2 >> b3 ;
        
        int a = a1+a2+a3;
        int b = b1+b2+b3;
        
        if(c>=2*d)
            cout << "NO" << endl ;
        else if(a<150 & b<150)
            cout << "NO" << endl ;
        else if(a<150 & d<=c)
            cout << "NO" << endl ;
        else if(b<150 & d<=c)
            cout << "NO" << endl ;
        else
            cout << "YES" << endl ;
    }
  return 0;
}
