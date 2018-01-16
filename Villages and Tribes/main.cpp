
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
	string s;
	cin>>t;
	while(t--)
    {
        cin>>s;ll A=0,B=0,C=0,K=0,a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A'){A++;a=1;b=0;A+=C;C=0;}
            else
            if(s[i]=='B'){B++;b=1;a=0;B+=K;K=0;}
            else
            {
                    if(a==1){C++;K=0;}
                    if(b==1){K++;C=0;}
            }


        }
        cout<<A<<" "<<B<<endll;
    }



	return 0;
}



