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


ll a[Nmax];
int main()
{
	fast();
	int t;
    cin>>t;
    while(t--){
        cin>>a[1]>>a[2]>>a[3];
        sort(a+1, a+3+1);
        ll x=(a[2]-a[1]+a[3]-a[2]);
        cout<<x;
        cout<<"\n";
    }
}
