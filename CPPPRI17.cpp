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

int isPrime[1000005]; 
void sieve() {
    for(int i = 0; i <= 1000005;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= 1000005; ++i) 
	{
         if(isPrime[i] == true) 
		 {
            for(int j = i * i; j <= 1000005; j += i)
                isPrime[j] = false;
        }
    }
} 

int main()
{
	fast();
    sieve();
	ll x;
	cin>>x;
    while (x--)
	{
		ll l, r;
		cin >> l >> r;
        int cnt=0;
        for(ll i=sqrt(l); i<=sqrt(r); i++){
            if (isPrime[i] && l<=i*i && i*i<=r)
			    cnt++;
        }
        cout<<cnt<<"\n";
		
	}
		

}
