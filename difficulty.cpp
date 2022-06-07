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
		int arr[4];
		int n=4;
		for(int i=0;i<4;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int c=1;
		int ma=0;
		for(int i=0;i<3;i++)
		{
			
			if(arr[i]==arr[i+1])
			{
				c++;
			}
			else{
				if(c>ma)
					{
						ma=c;
					}
					c=1;
			}
		}
		if(c>ma)
		{
			ma=c;
		}
		if(ma==4)
		{
			cout<<0<<endl;
		}
		else if(ma==3)
		{
			cout<<1<<endl;
		}
		else if(ma==1)
		{
			cout<<2<<endl;
		}
		else if(ma==2)
		{
			cout<<2<<endl;

		}
	}
}