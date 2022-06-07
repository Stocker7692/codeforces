#include<bits/stdc++.h>
using namespace std;


void print(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    cout<<"hii"<<endl;
    vector<int>v(5);
    for(int i=0;i<5;i++) v[i]=i;
    print(v);
}