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
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      if(k!=0)
      {for(int i=30;i>=0;i--)
      {
          int c=n;
          for(int j=0;j<n;j++)
          {
              if((1<<i)&a[j])
              c--;
          }
          if(c<=k)
          {
          if(k!=0)
          {for(int j=0;j<n;j++)
          {
           a[j]=a[j]|(1<<i);
          }
          }
          k-=c;
          }
      }
      }
      int ans=a[0];
      for(int i=1;i<n;i++)
      {
          ans=ans&a[i];
      }
      cout<<ans<<"\n";
      }
}
