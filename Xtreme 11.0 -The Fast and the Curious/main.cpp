#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define endll "\n"
using namespace std;
int a[30001]={0};

typedef long long ll;

struct Edge
{
	int src, dest;
};

struct Graph
{
	int V, E;
    struct Edge* edge;
};

struct Graph* createGraph(int V, int E)
{
	struct Graph* conn =
		(struct Graph*) malloc( sizeof(struct Graph) );
	conn->V = V;
	conn->E = E;
    conn->edge =
		(struct Edge*) malloc( conn->E * sizeof( struct Edge ) );
    return conn;
}

int find(int softy[], int i)
{
	if (softy[i] == -1)
		return i;
	return find(softy, softy[i]);
}

void Union(int softy[], int x, int y)
{
	int xset = find(softy, x);
	int yset = find(softy, y);
	softy[xset] = yset;
}

int isCycle( struct Graph* conn)
{
	int *softy = (int*) malloc( conn->V * sizeof(int) );
    memset(softy, -1, sizeof(int) * conn->V);
    for(int i = 0; i < conn->E; ++i)
	{
		int x = find(softy, conn->edge[i].src);
		int y = find(softy, conn->edge[i].dest);
        if (x == y)
			return 1;
        Union(softy, x, y);
		a[x]=2;a[y]=2;
		cout<<x<<" "<<y<<"\n";
	}
	return 0;
}


int main()
{
    fast;
	ll n,m;
	int x,y;
	cin>>n>>m;
	n++;
	struct Graph* conn = createGraph(n,m);
    REP(i,0,m)
    {
        cin>>x>>y;
        conn->edge[i].src=x;
        conn->edge[i].dest=y;
        a[x]=1;a[y]=1;
    }
	if(isCycle(con)){}
	for(int i=0;i<=m;i++)
	    if(a[i]==1)
	        cout<<i<<endll;

	return 0;
}
