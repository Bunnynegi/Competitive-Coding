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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}

/*Function to left rotate arr[] of siz n by d*/
void leftRotate(ll arr[], ll d, ll n)
{
    for (ll i = 0; i < gcd(d, n); i++) {
        /* move i-th values of blocks */
        ll temp = arr[i];
        ll j = i;

        while (1) {
            ll k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

bool eqa(ll a[],ll b[],ll n)
{
    for(ll i=0;i<n;i++)
        if(a[i]!=b[i])return false;
    return true;
}

int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        ll flag=0,z=n;
        while(z--){
                if(eqa(a,b,n)){cout<<"YES"<<endl;
                flag=1;
                break;}
                else{
                ll k=0;
                for(ll i=1;i<n;i++)
                {
                    if(a[i]<a[i-1])
                     {
                         k=i;
                        break;
                      }
                }
                leftRotate(a,k,n);
               for(ll i=0;i<n;i++)
                cout<<a[i]<<" ";
                cout<<endll;
                }

        }
        if(flag==0)cout<<"NO"<<endl;
    }



	return 0;
}




