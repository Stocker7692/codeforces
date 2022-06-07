#include<bits/stdc++.h>
using namespace std;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int rev(int n)
{
    int r = 0;
 
    while (n != 0) {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
 
    return (r);
}


int fun(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=arr[i]/2;j++)
        {
            if(j+rev(j)==arr[i])
            {
                c++;
                break;
            }
        }
    }
    return c;
    
}


int main() {
init_code();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<fun(arr,n);
    
    
	return 0;
}