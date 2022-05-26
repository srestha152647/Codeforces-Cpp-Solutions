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
  int n,l,r,x;
  cin>>n>>l>>r>>x;
  int ans=0;
  int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<(1<<n);i++)
   {
       int mx=0,mn=1e7,s=0;
       for(int j=0;j<n;j++)
       {
           if(i&(1<<j))
           {
               s+=a[j];
               if(a[j]>=mx)
               {
                   mx=a[j];
               }
               if(a[j]<=mn)
               {
                   mn=a[j];
               }
           }

       }
       if((s>=l&&s<=r)&&((mx-mn)>=x))
           ans++;
   }
   cout<<ans<<"\n";
}
