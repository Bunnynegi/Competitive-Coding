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
	ll t;
	cin>>t;

	while(t--)
    {
        string s;
        cin>>s;
        ll l=s.length();
        ll a[l]={0},c=0;
        ll sum=0;
        if(l>3){
                for(int i=0;i<l;i++)
                {
                    if(s[i]=='c')a[i]=1;
                    //cout<<a[i]<<" ";
                    if(s[i]=='h')a[i]=10;
                    if(s[i]=='e')a[i]=100;
                    if(s[i]=='f')a[i]=1000;
                }//cout<<endll;
                for(int i=0;i<l-3;i++)
                {
                    if(a[i]!=0 && a[i+1]!=0 && a[i+2]!=0 && a[i+3]!=0)
                        sum=a[i]+a[i+1]+a[i+2]+a[i+3];
                    if(sum==1111)c++;
                    //cout<<sum<<" ";
                    sum=0;
                }
                if(c)cout<<"lovely "<<c<<endll;
                else cout<<"normal"<<endll;
        }
        else cout<<"normal"<<endll;
        l=0;
    }


	return 0;
}

