
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define endll "\n"


using namespace std;

typedef long long ll;

int main()
{
	fast;
	double c,h,o;
    cin>>c>>h>>o;
    double y = ((2*o)-h)/4;
    double x = (h-2*c+2*y)/2;
    double z = (c-y)/6;
    if(x<0||y<0||z<0||x!=abs(x)||y!=abs(y)||z!=abs(z)||ll(x)!=x||ll(y)!=y||ll(z)!=z)
        cout<<"Error";
    else cout<<ll(x)<<" "<<ll(y)<<" "<<ll(z);


	return 0;
}

