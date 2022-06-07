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
void print(int n)
{
	if(n==0)
	{
		return;
	}
	//cout<<n<<endl;
	print(n-1);
	cout<<n<<endl;

}
void revPrint(int i,int n)
{
	if(i==n)
	{
		cout<<i<<endl;
		return;
	}

	cout<<i<<endl;
	revPrint(i+1,n);
}

int main()
{
	init_code();
	int n;
	cin>>n;
	print(n);
	//revPrint(1,n);
}