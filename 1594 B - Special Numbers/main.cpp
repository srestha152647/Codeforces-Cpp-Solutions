#include<bits/stdc++.h>
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define setbits(x) __builtin_popcountll(x)    //counts no. of setbits in a number
#define ctz(x) __builtin_ctzll(x)             //counts trailing zeros
#define clz(x) __builtin_clzll(x)             //counts leading zeros
//    string xb=bitset<64>(x).to_string();
//    xb.erase(0,xb.find_first_not_of('0'));  to convert decimal(x) to binary string(xb)
using namespace std;
int powcal(int x,int n,int m)
 {
 	int res=1;
  	while(n)
 	{
 		if(n%2==1)
 		res=((res%m)*(x%m))%m;
 		x=((x%m)*(x%m))%m;
 		n/=2;
 	}
 	return res;
 }
int32_t main()
{
  fast;
  int t;
  cin>>t;
  int m=1e9+7;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int ans=0;
      for(int i=63;i>=0;i--)
      {
          if(k&(1LL<<i))
          {
              ans+=powcal(n,i,m);
          }
      }
      cout<<(ans%m)<<"\n";
  }
}
