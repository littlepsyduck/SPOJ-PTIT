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
	int n, m;
	cin>>n>>m;
	if(n>m) swap(n, m);
	if(n%2==0) cout<<"Wilshere";
	else cout<<"Xavi";
}
