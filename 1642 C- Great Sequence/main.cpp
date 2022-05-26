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
      int n,x;
      cin>>n>>x;
      int a[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        vector<int> b(n,0);
        if(n==1)
            cout<<"1\n";

        else{
                int ans=0;
        int i=0,j=1;
        while(true)
        {
            if(j==n)
                break;
            if(b[i]==1)
                i++;
            else if((a[i]*x)==a[j])
            {
                b[i]=1;
                b[j]=1;
                i++;
                j++;
            }
            else if((a[i]*x)>a[j])
                j++;
            else if((a[i]*x)<a[j])
                i++;
        }
        for(int i=0;i<n;i++)
            {
                if(b[i]==0)
                    ans++;
            }
            cout<<ans<<"\n";
              }
  }
}
