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
      int n;
      cin>>n;
      string s;
      cin>>s;
      int i=0;
      int c=0,r=0;
      while(i<n)
      {
          if(s[i]=='(')
          {i+=2;
          if(i<=n)
          {c++;
          r+=2;
          }

          }
          else
          {
              int fl=-1;
              int j;
              for(j=i+1;j<n;j++)
              {
                  if(s[j]==')')
                  {
                      fl=j;
                      break;
                  }
              }
              if(fl!=-1)
              {
                r+=(fl-i+1);
                c++;
                i=j+1;
              }
              else
              {
                  break;
              }
          }

      }
      cout<<c<<" "<<(n-r)<<"\n";

  }
}
