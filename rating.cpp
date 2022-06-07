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
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		if(k>=2000)
		{
			cout<<1<<endl;
		}
		else if(k<2000 && k>=1600)
		{
			cout<<2<<endl;
		}
		else{
			cout<<3<<endl;
		}
	}
}