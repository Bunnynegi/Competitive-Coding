//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/anki-and-her-patterns/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)


using namespace std;
array<int,100001>a;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main()
{
	fast;
	a.fill(0);
	ll t,n,k;
	cin>>t;
	REP(i,0,100001)
	{
	    if(i==0)
	    a[i]=3;
	    else
	    a[i]=a[i-1]+(2*i)+1;
	}

	REP(i,0,t)
	{
	    cin>>n;
	    if(n==0)
	    break;
	    else
	    {
	          cout<<a[n-1]<<"/"<<n<<endl;
	    }


	}



	return 0;
}




