#include <bits/stdc++.h>
using namespace std;


int main() {
int t,j=1;
cin>>t;
while(t--)
{
    int n,ct=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    sort(arr,arr+n);
    int temp = 1;
    for(int i=1;i<n;++i)
    {   
        if(arr[i-1]==arr[i]) ct+=temp;
        else {temp++;ct+=temp;}
        
    }

  cout<<"case #"<<j++<<": "<<ct<<endl;
 
    
}

    return 0;
}
