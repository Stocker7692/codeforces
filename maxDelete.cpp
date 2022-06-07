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
		int N;
		cin>>N;
		int arr[N];
		int max1=0;
		for(int i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+N);
		int count=1;
		for(int i=0;i<N-1;i++)
		{
			if(arr[i]==arr[i+1])
			{
				count++;
			}
			else{
				max1=max(max1,count);
				count=1;
			}

		}
		if(N==2 ||N==1)
		{
			cout<<0<<endl;
		}
		else{
			cout<<N-max1<<endl;
		}
		
	}
}