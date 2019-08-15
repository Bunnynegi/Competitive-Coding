#include<bits/stdc++.h>
#define ll long long
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
	sync;
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,q,top=0,c=0;
	    cin>>n>>q;
	    ll a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    for(int i=0;i<n;i++)
	    {
	        if(q<a[i])c=0;
	        else
	        {
	            c+=a[i];
	            top=max(c,top);

	        }
	    }
	    cout<<top<<endl;
	}



	return 0;
}




