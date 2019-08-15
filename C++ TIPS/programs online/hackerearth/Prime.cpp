//https://www.hackerearth.com/challenge/college/cc4/algorithm/prime-problem/

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
	ll t,k;
	cin>>t;
	bool prime[1000009];

    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=1000001; p++)
        if (prime[p] == true)
           for (ll i=p*2; i<=1000001; i += p)
                prime[i] = false;


	while(t--)
	{
	    cin>>k;
	    prime[0]=prime[1]=false;
	    if(prime[k]==true)
	    cout<<"True"<<"\n";
	    else cout<<"False"<<"\n";
	}



	return 0;
}




