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
int reverse(int n)
{
    int r = 0;
 
    while (n != 0) {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
 
    return (r);
}
int main()
{
	init_code();
	int n;
	cin>>n;
	int a=0;
	int b=1;
	int c=2;
	while(c<n)
	{
		b=b*c;
		a=a+(b/c);
		c=c+1;
	}
	cout<<a<<endl;

}