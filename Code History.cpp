//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/code-history/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)


using namespace std;
array<int,100001>a;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main()
{
	fast;
	a.fill(0);
	ll n,i=0;
	while(cin>>n)
	{
	    if(n!=42)
	    {
	        a[i]=n;
	        i++;

	    }
	    else
	    {
	        REP(j,0,i)
	        cout<<a[j]<<endl;
	        break;
	    }
	}



	return 0;
}




