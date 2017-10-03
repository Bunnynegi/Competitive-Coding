//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/am-i-even/
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
	string s;
	while(cin>>s)
	{
	    ll k=s.length();

	    if((s[k-1]-'0')%2==0)
	    cout<<"EVEN"<<endl;
	    else cout<<"ODD"<<endl;
	}



	return 0;
}




