#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}



int main()
{
	fast();
	int x, y, z;
	cin>>x>>y>>z;
	int t=min(x, min(y-1, z-2));
	cout<<t+(t+1)+(t+2);
}
