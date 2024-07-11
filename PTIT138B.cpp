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

struct Tuoi 
{
    string ten1;
    string ten2; 
    int a, b; 
};
 
int n;
vector<Tuoi> a(n);
void tinh(string par, int age){
    for(int i = 0 ; i < n ; ++i){
        if(a[i].ten1 == par){
            a[i].b = age - a[i].a;
            tinh(a[i].ten2, a[i].b);
        }
    }
}
 
bool cmp(Tuoi x , Tuoi y){
    if(x.b == y.b) return x.ten2 < y.ten2;
    return x.b > y.b;
}
 
 
 
int main()
{
	fast();
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
        cout<<"DATASET "<<i<<"\n";
		cin >> n;
  		a.resize(n);
    	for(int i = 0 ; i < n ; ++i){
        	cin >> a[i].ten1 >> a[i].ten2 >> a[i].a;
    	}
   		tinh("Ted", 100);
   		sort(a.begin(), a.end(), cmp);
    	for(int i = 0 ; i < n ; ++i){
        	cout << a[i].ten2 << " " << a[i].b << endl;
    	} 
	}
}
