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
	int  t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	    int  ans=0;
		for(int c=1;c<=n;c++)
		{
			for(int b=c;b<=n;b+=c)
			{
				if(b%c==0)
				{
					for(int a=c;a<=n;a+=b)
					{
						if(a%b==c)
						{
							ans+=1;
						}
					}
				}
			}
		}
		cout<<ans<<endl;

		// int n;
  //         cin>>n;
  //         int triplets = 0;
  //         for(int a=1; a<=n; a++)
  //         {
  //             for(int b=a; b<=n; b+=a)
  //             {
  //                 if(b%a==0)
  //                 {
  //                     for(int c=a; c<=n;c+=b)
  //                     {
  //                         if(c%b==a)
  //                         {
  //                             triplets+=1;
  //                         }
  //                     }
  //                 }
  //             }
  //         }
  //         cout<<triplets<<endl;
	}
}