//
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define mp make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define endll "\n"
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long ll;

int main()
{
	fast;
	ll n,m;
	cin>>n>>m;
	map<string,string>a;
	string s,y;
	ll l;
	for(int i=0;i<n;i++)
    {
        cin>>s;
        cin>>y;
        a[y]=s;
    }
    for(int i=0;i<m;i++)
    {
        cin>>s;
        cin>>y;
        l=y.length();
        l--;
        cout<<s<<" "<<y<<" #";
        y=y.substr(0,l);
        cout<<a[y]<<endll;
    }



	return 0;
}




