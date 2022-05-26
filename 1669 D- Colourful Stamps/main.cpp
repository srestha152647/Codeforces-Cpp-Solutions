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
      int n;
      cin>>n;
      string s;
      cin>>s;
      s+='W';
      int fl=0;
      string x="";
      for(int i=0;i<s.length();i++)
      {
          if(s[i]!='W')
          {
              x+=s[i];
          }
          else
          {
              if(x.length()==1)
              {
                  fl=1;
                  break;
              }
              else if(x.length()!=0)
              {
                  int r=0,b=0;
                  for(int j=0;j<x.length();j++)
                  {
                      if(x[j]=='B')
                      b++;
                      else
                      r++;
                  }
                  if(b==0||r==0)
                  {
                      fl=1;
                      break;
                  }
              }
              x="";
          }
      }
      if(fl==0)
      cout<<"YES\n";
      else
      cout<<"NO\n";
      }
}
