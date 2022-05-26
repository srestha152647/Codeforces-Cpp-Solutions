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
      cout<<"? "<<l<<" "<<r<<endl;
      int z;
      cin>>z;
      int p;
         if(z!=1)
          {cout<<"? "<<l<<" "<<z<<endl;
          cin>>p;
          }
          else
          p=0;
          if(p==z)
          {
             r=z;
             while((r-l)>1)
             {
                 int mid=l+(r-l)/2;
                 cout<<"? "<<mid<<" "<<z<<endl;
                 int q;
                 cin>>q;
                 if(q==z)
                 {
                     l=mid;
                 }
                 else
                 {
                     r=mid;
                 }
             }

          }
          else
          {
              l=z;
              while((r-l)>1)
             {
                 int mid=l+(r-l)/2;
                 cout<<"? "<<z<<" "<<mid<<endl;
                 int q;
                 cin>>q;
                 if(q==z)
                 {
                     r=mid;
                 }
                 else
                 {
                     l=mid;
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
