//NAME : BUNNY NEGI , PLACE : NEW DELHI
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
typedef long long ll;
typedef vector<ll> v;
typedef vector<v> vv;
typedef pair<ll,ll> P;


int main()
{
	fast; LL t; cin>>t;
	while(t--)
    {
        LL n,ans=0; cin>>n;
        vector< pair<string, LL> >s;
        F(j,0,n)
        {
            string x; cin>>x;
            LL z=0;
            s.pbmp(x,-1);
            //cout<<"inside for"<<endl;
            if(j>0)
            {
                //cout<<"inside if 1"<<endl;
                F(i,0,j) if(s[i].first.compare(s[j].first)==0) { s[j].second=s[i].second/2;  break; }
                if(s[j].second==-1)
                {
                    //cout<<"inside else 1"<<endl;
                    z=0;
                    LL l=x.length();
                    F(i,0,l)
                    {
                        if(i==0) z+=2;
                        else if(((x[i-1]=='d' || x[i-1]=='f')&&(x[i]=='j' || x[i]=='k')) || (x[i-1]=='j' || x[i-1]=='k')&&(x[i]=='d' || x[i]=='f')) z+=2;
                        else if(((x[i-1]=='d' || x[i-1]=='f')&&(x[i]=='d' || x[i]=='f')) || (x[i-1]=='j' || x[i-1]=='k')&&(x[i]=='j' || x[i]=='k')) z+=4;
                    }
                    s[j].second=z;
                    //ans+=z;
                    //cout<<z<<"  in else "<<endl;
                }
            }
            else
            {
                //cout<<"inside else 2"<<endl;
                z=0;
                LL l=x.length();
                F(i,0,l)
                {
                    if(i==0) z+=2;
                    else if(((x[i-1]=='d' || x[i-1]=='f')&&(x[i]=='j' || x[i]=='k')) || (x[i-1]=='j' || x[i-1]=='k')&&(x[i]=='d' || x[i]=='f')) z+=2;
                    else if(((x[i-1]=='d' || x[i-1]=='f')&&(x[i]=='d' || x[i]=='f')) || (x[i-1]=='j' || x[i-1]=='k')&&(x[i]=='j' || x[i]=='k')) z+=4;
                }
                s[j].second=z;
                //ans+=z;
                //cout<<z<<endl;
            }
            ans+=s[j].second;
            //cout<<s[j].second<<"  ";
        }
        cout<<ans<<endl;
    }
	return 0;

}




