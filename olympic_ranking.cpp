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
		ll arr[6];
		for(ll i=0;i<6;i++)
		{
			cin>>arr[i];
		}
		ll s1=0;
		ll s2=0;
		for(ll i=0;i<3;i++)
		{
			s1+=arr[i];
			s2+=arr[5-i];
		}
		if(s1>s2)
		{
			cout<<1<<endl;

		}
		else{
			cout<<2<<endl;
		}
	}
}