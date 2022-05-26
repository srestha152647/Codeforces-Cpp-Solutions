#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define setbits(x) __builtin_popcountll(x)    //counts no. of setbits in a number
#define ctz(x) __builtin_ctzll(x)             //counts trailing zeros
#define clz(x) __builtin_clzll(x)             //counts leading zeros
//    string xb=bitset<64>(x).to_string();
//    xb.erase(0,xb.find_first_not_of('0'));  to convert decimal(x) to binary string(xb)
using namespace std;
int32_t main()
{
  fast;
  int t;
  cin>>t;
  while(t--)
      {
      string s;
      cin>>s;
      int d=s.find_last_of('1');
      int x=max(0,d);
      int n=(s.length()-1);
      d=s.find('0');
      int y;
      if(d==-1)
      y=n;
      else
      y=d;
      cout<<(y-x+1)<<'\n';
      }
}
