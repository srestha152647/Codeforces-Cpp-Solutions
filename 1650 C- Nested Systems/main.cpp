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
      vector<pair<int,pair<int,int>>> a(m);
      for(int i=0;i<m;i++)
      {
          int x;
          cin>>x;
          int w;
          cin>>w;
          a[i].first=w;
          a[i].second.first=x;
          a[i].second.second=i+1;
      }
      sort(a.begin(),a.end());
      int ans=0;
      vector<pair<int,int>> b(2*n);
      for(int i=0;i<(2*n);i++)
      {
          ans+=a[i].first;
          b[i].first=a[i].second.first;
          b[i].second=a[i].second.second;
      }
      cout<<ans<<"\n";
      sort(b.begin(),b.end());

      for(int i=0;i<n;i++)
      {
          cout<<b[i].second<<" "<<b[(2*n)-i-1].second<<"\n";
      }
      cout<<"\n";
  }
}
