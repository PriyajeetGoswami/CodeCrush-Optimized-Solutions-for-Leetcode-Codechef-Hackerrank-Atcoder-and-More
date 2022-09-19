// Reverse the number    https://mycode.prepbytes.com/problems/fundamentals/RVSREUM
// PrepBuddy gave you a number 
// X
//  and asks you to reverse that number and print it.

// Input format
// One integer is provided denoting the value of 
// X
// .
// Note - The given number doesn't have leading or ending zero's.

// Output format
// Print the reverse of 
// X
// .

// Constraints
// 1<=X<=10^6

// Time Limit 1 second

// Example
// Input
// 102345

// Output
// 543201

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  cin>>n;
  string rev="";
  for(int i=0;i<n.size();i++){
    rev=n[i]+rev;
  }
  cout<<rev<<endl;
  return 0;
}