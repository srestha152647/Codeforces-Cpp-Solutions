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
      int n;
      cin>>n;
      int a[n];
      int b[n];
      for(int i=0;i<n;i++)
      {cin>>a[i];
      b[i]=a[i];
      }
      sort(b,b+n);
      int d=0;
      int ans=(b[0]+1)/2+(b[1]+1)/2;

      for(int i=0;i<(n-2);i++)
      {
          d=(a[i]+a[i+2]+1)/2;
           ans=min(ans,d);
      }

      d=0;
      for(int i=0;i<(n-1);i++)
      {
          int x=max(a[i],a[i+1]);
          int y=min(a[i],a[i+1]);
          if((x-y)>=y)
          {
              d=(x+1)/2;
          }
          else
          {
              d=(x-y);
              x-=2*d;
              y-=d;
              d+=(x+y)/3;
              if((x+y)%3!=0)
              d++;
          }
           ans=min(ans,d);
      }
      cout<<ans<<"\n";

}
