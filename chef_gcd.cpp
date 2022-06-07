	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
// int ans=0;

// void solve(int x,int y,int &c)
// {
   
   
//     if(gcd(x,y)>1)
//     {
//         return ;
//     }
//     else{
//        // c++;
//         solve(x,y+1,c++);
//     }
    
// }
int main()
{
	init_code();
	 int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int c=0;
        if(gcd(x,y)>1)
        {
        	cout<<0<<endl;
        }
        else if(gcd(x+1,y)>1)
        {
        	cout<<1<<endl;
        }
        else if(gcd(x,y+1)>1)
        {
        	cout<<1<<endl;
        }
        else{
        	cout<<2<<endl;
        }
      
     
       
    }
}