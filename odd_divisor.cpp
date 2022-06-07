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
		ll n;
		cin>>n;
		ll c=0;
		// for(ll i=2;i<=n;i++)
		// {
		// 	if(c>0)
		// 	{
		// 		break;
		// 	}
		// 	if(n%i==0)
		// 	{
		// 		if(i%2!=0)
		// 		{
		// 			c++;
		// 			//break;
		// 		}
		// 	}
		// }
		while(n)
		{
			if(n%2!=0)
			{
				c++;
				//break;
			}
			n=n/2;
		}
		if(c>1)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
}