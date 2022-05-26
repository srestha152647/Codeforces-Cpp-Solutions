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
      int a[11][11];
      for(int i=0;i<11;i++)
      {
          for(int j=0;j<11;j++)
          a[i][j]=0;
      }
      for(int i=0;i<n;i++)
      {
          string s;
          cin>>s;
          a[s[0]-'a'][s[1]-'a']++;
      }
      int ans=0;
      for(int i=0;i<11;i++)
      {
          for(int j=0;j<11;j++)
          {
              for(int k=0;k<11;k++)
              {
                  for(int l=0;l<11;l++)
                  {
                      if((i!=k)&&(j==l))
                      ans+=a[i][j]*a[k][l];
                      else if((i==k)&&(j!=l))
                      ans+=a[i][j]*a[k][l];
                  }
              }
          }
      }
      ans/=2;
      cout<<ans<<"\n";

      }
}
