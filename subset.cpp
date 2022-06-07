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
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int p;
	p=(n/2)+1;
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=arr[i];
	}
	sort(arr,arr+n);
	vector<int>v;
	int s1=0;
	int f=0;
	for(int i=n-1;i>=p;i--)
	{
		s1+=arr[i];
		s=s-arr[i];
		v.push_back(arr[i]);
		if(s<s1)
		{
			f=1;
			break;
		}
		
			
	}
	if(f==1 || s<s1)
	{
		sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	}

	
}