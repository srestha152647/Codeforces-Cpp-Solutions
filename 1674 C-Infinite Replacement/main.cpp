#include<bits/stdc++.h>
#define int long long
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
      string p;
      cin>>p;
      if(p=="a")
      cout<<"1\n";
      else
      {
          if(p.find('a')==-1)
          cout<<(int)(pow(2,s.length())+0.5)<<"\n";
          else
          cout<<"-1\n";

      }

  }
}
