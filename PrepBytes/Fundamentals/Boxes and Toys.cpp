// https://mycode.prepbytes.com/problems/fundamentals/BOXTOY

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int t[n],c[n];
  int count=0;
  for(int i=0;i<n;i++){
    cin>>t[i]>>c[i];
    if(c[i]-t[i]>=2)
      count++;
  }
  cout<<count<<endl;
  return 0;
}