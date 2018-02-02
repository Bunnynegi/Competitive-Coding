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
map <int,int>a;

int main()
{
	fast;
	ll n;
	cin>>n;
	ll m=n;

    a[1]=1;a[2]=1;
    if(n<3)
    {
        for(int i=1;i<=n;i++){
            if(a[i]!=1)
            cout<<"o";
        else cout<<"O";}
    }
    else{
            for(int i=1;i<=2;i++){
            if(a[i]!=1)
            cout<<"o";
        else cout<<"O";}
        int i=3;
        m=m-2;
         int fib1 = 1, fib2 = 2, fib3 = 3;
    while (m--)
    {
        fib3 = fib1 + fib2,fib1 = fib2,fib2 = fib3;
        //cout<<fib3<<endll;
        a[fib3]=1;

        if(a[i]!=0)
            cout<<"O";
        else cout<<"o";
        i++;
    }}

	return 0;
}




