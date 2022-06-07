	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}






void printSubsequence(string input, string output,int &count)
{
    // Base Case
    // if the input is empty print the output string
    if (input.empty()) {
    	int z=0,o=0;
        for(int i=0;i<output.size();i++)
        {
        	if(output[i]=='0')
        	{
        		z++;
        	}
        	else{
        		o++;
        	}

        }
        if(z==0)
        {
        	count++;
        }
        return;
    }
 
    // output is passed with including
    // the Ist character of
    // Input string
    printSubsequence(input.substr(1), output + input[0],count);
 
    // output is passed without
    // including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output,count);
  }

int main()
{
	init_code();
	string s;
	cin>>s;
	string ans="";
	int c2=0,c1=0,cnt=0;
	//printSubsequence(s,ans,count);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0')
		{
			c1++;

		}
		else if(s[i]=='1')
		{
			c2++;
		}
		if(c1==c2)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	
}