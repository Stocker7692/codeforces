	#include<bits/stdc++.h>
using namespace std;
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
}

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
	int p;
	cin>>p;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int day=1,count=0;
	while(count<=p)
	{
		
		for(int i=0;i<n;i++)
		{
			if(day%arr[i]==0)
			{
				count++;
			}
		}
		day++;
	}
	cout<<day-1<<endl;
}