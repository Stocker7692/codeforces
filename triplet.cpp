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
		ll N,i,j,A,B,k;
		cin>>N;
		ll c=0;
		for(i=1;i<=N;i++)
		{
			
			for(j=i;j<=N;j+=i)
			{
				if(j%i==0)
				{
					for(k=i;k<=N;k+=j)
					{
						if(k%j==i)
						{
							c++;
						}
					}
				}
				

			}
		}
		cout<<c<<endl;
	}
}