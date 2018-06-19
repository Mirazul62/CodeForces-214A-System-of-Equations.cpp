#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,count=0;
    cin>>n>>m;
    for(i=0;i<=sqrt(n);i++)
    {
        for(j=0;j<=sqrt(m);j++)
      {
          if((i*i+j)==n && (i+j*j)==m)

           {
            //   cout<<i<<" "<<j<<endl;

               count++;
           }
      }
    }
    cout<<count;
}
