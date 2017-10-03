//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/1242f495677e46648df24433936d1a33/

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;
typedef long long ll;




int main()
{
	sync;
	ll t;
	cin>>t;

	while(t--)
	{
	    ll n;
	    cin>>n;
	    while(n>0)
	    {
	        string k;
	        cin>>k;
	        ll l=k.length();
	        n=n-l-1;
	        for(int i=l-1;i>=0;i--)
	        {
	            cout<<k[i];
	        }
	        cout<<" ";
	    }
	    cout<<"\n";
	}



	return 0;
}




