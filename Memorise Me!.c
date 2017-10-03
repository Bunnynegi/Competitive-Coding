//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/memorise-me/
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


array<int,100001>f;

int main()
{
	fast;
	ll n,a;
	cin>>n;
    f.fill(0);
	REP(i,0,n)
	{
	    cin>>a;
	    f[a]++;
	}
	ll q;
	cin>>q;
	while(q--)
	{
	    ll k;
	    cin>>k;
	    if(f[k]!=0)
	    cout<<f[k]<<endl;
	    else
	    cout<<"NOT PRESENT"<<endl;
	}



	return 0;
}




