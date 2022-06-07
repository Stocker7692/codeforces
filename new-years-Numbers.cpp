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
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll f=0;
		// for(ll i=0;i<500;i++)
		// {
		// 	for(ll j=0;j<500;j++)
		// 	{
		// 		if(((i+j)*2020+j)==n)
		// 		{
		// 			f=1;
		// 			break;
		// 		}
		// 	}
		// }
		while(n>=2020)
		{
			f++;
			n=n-2020;
		}
		if(f>=n)
		{
			cout<<"YES"<<endl;

		}
		
		else{
			cout<<"NO"<<endl;
		}
	}
}