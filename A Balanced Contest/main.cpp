//
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define F(i,a,b) for (int i = a; i < b; i++)
#define endll "\n"


using namespace std;

typedef long long ll;

int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,p;
        cin>>n>>p;
        ll c=p/2,h=p/10,x;
        ll hard=0,cake=0;
        F(i,0,n)
        {   cin>>x;
            if(x<=h)hard++;
            if(x>=c)cake++;
        }
        //cout<<hard<< " "<<cake<<endll;
        if(cake==1&&hard==2)
            cout<<"yes"<<endll;
        else cout<<"no"<<endll;


    }




	return 0;
}




