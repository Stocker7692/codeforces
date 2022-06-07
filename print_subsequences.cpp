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

void print(string input,string output)
{
	if(input.empty())
	{
		cout<<output<<endl;
		return;
	}

	print(input.substr(1),output+input[0]);
	print(input.substr(1),output);
}
int main()
{
	init_code();
	string input="abc";
	string output="";
	print(input,output);
}