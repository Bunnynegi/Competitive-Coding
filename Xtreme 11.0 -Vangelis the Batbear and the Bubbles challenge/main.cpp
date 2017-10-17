//
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

class Master
{
    int vertex;
    list<int> *vel;
    bool cyl(int vertex, bool gothrough[], int bp)
    {
        gothrough[vertex] = true;
        list<int>::iterator i;
        for (i = vel[vertex].begin(); i != vel[vertex].end(); ++i)
        {
            if (!gothrough[*i])
                {if (cyl(*i, gothrough, vertex))return true;}
            else if (*i != bp)return true;
    }
    return false;
    }
    public:
    Master(int vertex)
    {
        this->vertex = vertex;
    vel = new list<int>[vertex];
    }
    ~Master()
    {
        vertex=NULL;

    }
    void linkto(int vertex, int w)
    {
        vel[vertex].PB(w);
        vel[w].PB(vertex);
    }
    bool check()
    {
        bool *gothrough = new bool[vertex];
        for (int i = 0; i < vertex; i++)
            gothrough[i] = false;

        for (int u = 0; u < vertex; u++)
            if (!gothrough[u])
              if (cyl(u, gothrough, -1))
                 return true;

        return false;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[2*m]={0};
        Master conn(n);
        REP(i,0,2*m)
        {
            cin>>a[i];

        }
        for(int i=0;i<2*m;i+=2)conn.linkto(a[i],a[i+1]);
        conn.check()? cout << "1\n":cout << "0\n";
    }



    return 0;
}



