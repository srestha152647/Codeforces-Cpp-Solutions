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
      vector<int> a(26,0);
      int c=0;
      for(int i=0;i<s.length();i++)
      {
          a[s[i]-97]++;
      }
      for(int i=0;i<26;i++)
      {
          if(a[i]!=0)
          c++;
      }
      int fl=0;
      for(int i=0;i<c;i++)
      {char ch=s[i];
          for(int j=i;j<s.length();j+=c)
          {
              if(ch!=s[j])
              {
                  fl=-1;
                  break;
              }
          }
          if(fl==-1)
          break;
      }
      if(fl==0)
      cout<<"YES\n";
      else
      cout<<"NO\n";
  }
}
