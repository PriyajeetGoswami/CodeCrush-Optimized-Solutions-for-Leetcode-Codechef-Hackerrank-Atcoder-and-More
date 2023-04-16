// https://www.codechef.com/viewsolution/64857316

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
        cin >> n >> m;
        int f[n],c[m];
        
        for(int i=0;i<n;i++)
            cin>>f[i];
 
        for(int i=0;i<m;i++)
            cin>>c[i];
    
        int cnt=0;
        int i = 0, j = 0, sw = 0;
        while(i<n & j<m)
       {
            if(sw%2==0) //Watching Football
            {
                if(c[j]<f[i])
                {
                    sw++; // Change Channel
                    j++;
                }
                else
                    i++;
            }
            else // Watching Cricket
            {
                if(c[j]>f[i])
                {
                    sw++; // Change Channel
                    i++;
                }
                else
                    j++;
            }
            
       }
       sw++;
       cout<<sw<<"\n";
    }
  return 0;
}