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
      int n,m;
      cin>>n>>m;
      int a[n][m];
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              cin>>a[i][j];
          }
      }
      int s=(n+m-1)/2;
      vector <int> c(s,0);
      vector <int> d(s,0);
      int k=n+m-1;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if((n+m)%2==1)
              {
                  if((i+j)>=s)
              {c[k-(i+j)-1]+=a[i][j];
               d[k-(i+j)-1]+=a[i][j];
               if(a[i][j]==0)
               d[k-(i+j)-1]++;
              }
              else
              { c[i+j]+=a[i][j];
              d[i+j]+=a[i][j];
              if(a[i][j]==0)
              d[i+j]++;
             }
              }
              else
              {if((i+j)!=s)
                 { if((i+j)>s)
              {c[k-(i+j)-1]+=a[i][j];
               d[k-(i+j)-1]+=a[i][j];
               if(a[i][j]==0)
               d[k-(i+j)-1]++;
              }
              else
              { c[i+j]+=a[i][j];
              d[i+j]+=a[i][j];
              if(a[i][j]==0)
              d[i+j]++;
             }
              }
              }
          }
      }

      int ans=0;
      for(int i=0;i<s;i++)
      {
          ans+=min(c[i],(d[i]-c[i]));
      }
      cout<<ans<<"\n";
  }
}

