//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/dna-pride/
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
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    vector<string>a;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='A'||s[i]=='G'||s[i]=='T'||s[i]=='C')
	        {

	            if(s[i]=='A') a.push_back("T");
	            if(s[i]=='T') a.push_back("A");
	            if(s[i]=='G') a.push_back("C");
	            if(s[i]=='C') a.push_back("G");
	            if(i==n-1)
	            {
	                REP(i,0,n)
	                    cout<<a[i];
	                cout<<endl;
	                break;
	            }

	        }
	        else
	        {
	            cout<<"Error RNA nucleobases found!"<<endl;
	            break;
	        }
	    }

	}



	return 0;
}




