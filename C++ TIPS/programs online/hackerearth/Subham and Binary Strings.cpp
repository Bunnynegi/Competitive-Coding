//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subham-and-binary-strings/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        static string s;
        cin>>n;
        cin>>s;
        int c=count(s.begin(),s.end(),'0');
        cout<<c<<endl;
    }
    return 0;
}
