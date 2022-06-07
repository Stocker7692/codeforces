	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

ll solve(ll n){

    return 0;
}
int main()
{
	init_code();
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,k;
		cin>>n>>p>>k;
		ll i=0;;
		ll c=0;
		while(i<n)
		{
			c++;
			i=i+k;
		}
		ll x=p%k;
		ll ans=c*(1+x);
		i=0;
		ll q=0;
		while(i<=p)
		{
			q++;
			i=i+x+k;
		}
		cout<<ans-c+q<<endl;
	}
}