	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// void init_code(){
    
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }

// ll solve(ll n){

//     return 0;
// }
int main()
{
	// init_code();
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int output=0;
	int ans=1;
	sort(arr,arr+n);
	int f=0;
	for(int i=0;i<n;i+=2)
	{
		if(arr[i]<0 && arr[i+1]<0)
		{
			f++;
			ans =ans*arr[i]*arr[i+1];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			f++;
			ans=ans*arr[i];
		}
	}
	if(f>0)
	{
		cout<<ans<<endl;

	}
	else{
		cout<<0<<endl;
	}
	

}