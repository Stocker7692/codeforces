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
		ll x=p%k;
		ll y=(n/k)+1;
		for(ll i=0;i<x;i++)
		{
			y--;

		}
		ll c=((n-1)/k)+1;
		ll rem=(p%k);
		ll ans=(rem*c)+((p/k)+1);
		//ll q=((n-1)%k)+1;
		if(y<0)
		{
			cout<<ans+y<<endl;
		}
		else{
			cout<<ans<<endl;
		}
		
	}
}