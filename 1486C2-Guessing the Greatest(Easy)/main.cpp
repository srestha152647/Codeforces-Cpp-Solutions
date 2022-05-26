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
      int l=1;
      int r=n;
      int mid;
      while((r-l)>1)
      {
          mid=l+(r-l)/2;
          cout<<"? "<<l<<" "<<r<<endl;
          int q;
          cin>>q;
          if(mid>=q)
          {
              cout<<"? "<<l<<" "<<mid<<endl;
              int p;
              cin>>p;
              if(p==q)
              {
                  r=mid;
              }
              else
              {
                  l=mid;
              }
          }
          else
          {
              cout<<"? "<<mid<<" "<<r<<endl;
              int p;
              cin>>p;
              if(p==q)
              {
                  l=mid;
              }
              else
              {
                  r=mid;
              }
          }
      }
      cout<<"? "<<l<<" "<<r<<endl;
      int x;
      cin>>x;
      if(x==l)
      cout<<"! "<<r<<endl;
      else
      cout<<"! "<<l<<endl;

      }
