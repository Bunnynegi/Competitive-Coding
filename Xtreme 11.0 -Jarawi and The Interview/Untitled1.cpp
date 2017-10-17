
#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;

int main()
{
	fast;
	ULL t; cin>>t;
	while(t--)
	{
	    LL n; cin>>n;
	    LL a[n],b[n];
	    LL c=0,k=0;
	    F(i,0,n)
	    {
	        cin>>a[i];
	        if(a[i]==0)
            {
                b[k++]=0;
                c++;
            }
	    }
	    sort(a,a+n);
	    int flag=1;
	    F(i,0,n)
	    {
	        if((a[i] > 0) && flag==1)
            {
                b[k++]=a[i];
                flag=0;
            }
            if(flag==0)
            {
                b[--n]=a[i];
                flag=1;
            }
            cout<<b[i]<<" ";

	    }
        cout<<endl;
	}
return 0;
}
