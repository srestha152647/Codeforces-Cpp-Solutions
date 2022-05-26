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
      {int n;
      cin>>n;
      int a[n];
      vector<pair<int,int>> p(n);
      for(int i=0;i<n;i++)
      {cin>>a[i];
      p[i].first=a[i];
      }
      int b[n];
       for(int i=0;i<n;i++)
      {cin>>b[i];
      p[i].second=b[i];
      }
      sort(p.begin(),p.end());
      int fl=0;
      for(int i=0;i<n-1;i++)
      {
          if(p[i+1].second<p[i].second)
          {
              fl=-1;
              break;
          }
      }
      if(fl==-1)
      cout<<"-1\n";
      else
      {
          vector<int> z1;
           vector<int> z2;
          for(int i=0;i<n-1;i++)
          {
              for(int j=0;j<n-i-1;j++)
              {
                  if(a[j]>a[j+1])
                  {
                      z1.push_back(j+1);
                      z2.push_back(j+2);
                      int tp=a[j];
                      a[j]=a[j+1];
                      a[j+1]=tp;
                      tp=b[j];
                      b[j]=b[j+1];
                      b[j+1]=tp;
                  }
                  else if(a[j]==a[j+1])
                  {
                    if(b[j]>b[j+1])
                    {z1.push_back(j+1);
                    z2.push_back(j+2);

                      int tp=b[j];
                      b[j]=b[j+1];
                      b[j+1]=tp;
                    }
                  }
              }
          }
          cout<<z1.size()<<"\n";
          for(int i=0;i<z1.size();i++)
          {
              cout<<z1[i]<<" "<<z2[i]<<"\n";
          }
      }
      }
}
