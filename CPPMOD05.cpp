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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll m;
		cin>>m;
		ll k=0;
		for(int i=0; i<s.size(); i++){
			k=((k*10)%m+(s[i]-'0'))%m;
		}
		cout<<k<<"\n";
	}
}