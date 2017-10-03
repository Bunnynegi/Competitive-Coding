//https://www.hackerearth.com/challenge/college/cc4/algorithm/hidden-number/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)


using namespace std;



typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main()
{
	fast;
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll a[n];
	    ll f[100001]={0};
	    REP(i,0,n)
	    {
	        cin>>a[i];
	        f[a[i]]++;

	    }
	    vector<int> vec(f, f + sizeof(f) / sizeof(ll) );

	    //ll *p=find(f,f+100001,1);
	    //size_t x=index_of(f,f+100001,1);
	    cout<<find(vec.begin(),vec.end(),1) - vec.begin()<<endl;

	}



	return 0;
}




