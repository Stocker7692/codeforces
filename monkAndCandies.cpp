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
		ll n,k;
		cin>>n>>k;
		multiset<ll>m;
		for(ll i=0;i<n;i++)
		{
			int x;
			cin>>x;
			m.insert(x);
		}
		ll ans=0;
		for(ll i=0;i<k;i++)
		{
			auto it=--m.end();
			ans +=(*it);
			
			m.insert(*it/2);
			m.erase(it);
		}
		cout<<ans<<endl;

	}
}