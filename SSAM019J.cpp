#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

ll ucln (ll a, ll b) {
	if(b==0) return a;
	return ucln(b, a%b);
}

ll bcnn (ll a, ll b) {
	return a/ucln(a, b)*b;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << a[0] << " ";
        for (int i = 1; i < n; i++)
            cout << a[i] * a[i - 1] / ucln(a[i], a[i - 1]) << " ";
        cout << a[n - 1];
		cout<<"\n";
	} 
}
