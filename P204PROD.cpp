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


int a[Nmax];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c=0, l=0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
			if(a[i]%2==0) c++;
			else l++;
		}
        if(l==0) cout<<"NO";
		else if(l%2!=0) cout<<"YES";
		else{
			if(c==0) cout<<"NO";
			else cout<<"YES";
		}
		cout<<"\n";
	}
}