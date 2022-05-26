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
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=n-1;i>0;i-=2)
      {
          int x=a[i];
          int y=a[i-1];
          if(x<y)
          {
              int p=a[i];
              a[i]=a[i-1];
              a[i-1]=p;
          }
      }
      int fl=0;
      for(int i=0;i<(n-1);i++)
      {
         if(a[i]>a[i+1])
         {
             fl=1;
             break;
         }
      }
      if(fl==0)
      cout<<"YES\n";
      else
      cout<<"NO\n";
  }
}
