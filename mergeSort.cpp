#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void merge(int arr[],int l,int m,int r){
    int n1=m-l+1,n2=r-m;
    int L[n1],R[n2];
    int k=0;
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(int i=0;i<=n2;i++){
        R[i]=arr[m+1+i];
    }
    int i=0,j=0;
    k=l;
    while(i<n1&&j<n2){
        if(L[i]>R[j]){
            arr[k]=R[j];
            j++;
        }
        else{
            arr[k]=L[i];
            i++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
       mergeSort(arr,l,m);
       mergeSort(arr,m+1,r);
       merge(arr,l,m,r);
    }
}
void printArray(int arr[],int arr_size){
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

   int arr[]={10,5,30,15,7};
   int arr_size=sizeof(arr)/sizeof(arr[0]);
   cout<<"before Sorting array"<<endl;
   printArray(arr,arr_size);
   mergeSort(arr,0,arr_size-1);
   cout<<endl<<"Sorted array"<<endl;
   printArray(arr,arr_size);
   return 0;
}