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
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,x;
        cin>>n;
        set <ll, greater <ll> >a;
        ll b[1000000]={0};
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            a.insert(x);
            b[x]++;

        }
        ll c=0,temp,tempi;
        set <ll, greater <ll> > :: iterator itr;
        for (itr = a.begin(); itr != a.end(); ++itr)
        {

            temp=b[*itr];
            if(temp%2==0 )
            {
                tempi=temp/2-1;
                c+=(6+2*(tempi-1))/2;
                cout<<"even c: "<<c;
            }
            if(temp%2!=0 && temp>2)
            {
                tempi=temp/2;
                c+=(4+2*(tempi-1))/2;
                cout<<" odd c2 :"<<c;
                /*temp=b[*itr+1];
                c+=temp;
                b[*itr+1]--;
                cout<<" mix c:"<<c;*/
                temp=1;
            }
            if(temp%2!=0 && temp<2)
            {
                 if(b[*itr]>0){
                    b[*itr+1]--;
                    c++;
                 }

                cout<<" mix c:"<<c;
            }
            cout<<endl;

        }
        cout<<c<<endl;




    }



	return 0;
}




