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
void print(multiset<string>&m)
{
	// for(auto it=m.begin();it!=m.end();it++)
	// {
	// 	cout<<(*it)<<endl;
	// }

	for(auto value:m)
	{
		cout<< value<<endl;
	}
}
int main()
{
	init_code();
	multiset<string>s;
	s.insert("abs");
	s.insert("nhj");
	s.insert("iihiuh");
	s.insert("abs");
	auto it=s.find("abs");
	if(it!=s.end())
	{
		// cout<<(*it);
		s.erase(it);
	}
	//s.erase("nhj");
	print(s);
}