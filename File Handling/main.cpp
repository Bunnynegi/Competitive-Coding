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
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long ll;


int main()
{
	fast;
	ll t=100;
	srand(time(0));
    ofstream myfile;
    myfile.open("mini.txt");
    myfile<<100<<endl;
	while(t--)
    {
       ll n=20;
       myfile<<n<<endl;
       for(ll i=0;i<n;i++)
       {
          myfile<<rand()%1000000000;
          myfile<<" ";
       }
       myfile<<endl;
       //myfile<<rand()%10000<<" "<<rand()%10000<<endl;

    }



	return 0;
}




