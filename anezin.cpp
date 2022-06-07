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
	int k;
	cin>>k;
	int x=0,y=0,sum=0,r=1;
	sort(arr,arr+n);
	int p=arr[n-1];
	for(int i=0;i<k;i++)
	{
		
		if(p>arr[n-2])
		{
			sum+=p;
		}
	    else if(p==arr[n-1-y-1])
		{
			r++;
			sum=sum+r*p;
			i++;
			y++;
			
		}
		else{
			sum=sum+r*p;
			i++;
		}
		p--;
		x++;

	}
	cout<<sum<<endl;
}