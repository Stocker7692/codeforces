	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

stack<int>st;
void insert_at_bottom(int x)
{
	if(st.empty())
	{
		st.push(x);
	}
	else{
		int a=st.top();
		st.pop();
		insert_at_bottom(x);
		st.push(a);
	}
}

void reverse()
{
	if(st.size()>0)
	{
		int x=st.top();
	st.pop();
	reverse();
	insert_at_bottom(x);
	}
	
}
int main()
{
	init_code();
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	// cout<<"stack without reverse"<<endl;
	// while(st.size()>0)
	// {
	// 	cout<<st.top()<<endl;
	// 	st.pop();
	// }
	// cout<<endl;
	reverse();
	cout<<"stack with reverse"<<endl;
	while(st.size()>0)
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}