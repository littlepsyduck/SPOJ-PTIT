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


int a[1005];
int b[1005];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		int j=0;
		for(int i=0; i<n; i+=2){
			b[i]=a[j++];
		}
		for(int i=1; i<n; i+=2){
			b[i]=a[j++];
		}
		for(int i=0; i<n; i++){
			cout<<b[i]<<" ";
		}
		cout<<"\n";
	} 
}