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

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

bool isStrange(int n)
{
int max=INT_MIN;
	int i;
	for(i=1;i<=n;++i) 
		{ 
          if(n%i==0)
          {
          	if(isPrime(i))
          	{
          		if(i>max)
          		{
          			max=i;
          		}

          	}
          	else{
          		return 0;
          	}

          } 
          if(max*max>n)
          {
          	return 1;
          }
          return 0;

}
int main()
{
	init_code();
	int n;
	cin>>n;
	if(isStrange(n))
	{
		cout<<"strange"<<endl;
	}
	else{
		cout<<"Not strange"<<end;
	}
	
           
}

