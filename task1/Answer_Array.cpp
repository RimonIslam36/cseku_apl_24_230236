#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"N= ";
    cin>>n;
    cout<<"K= ";
    cin>>k;
    k=k%n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ansarr[n];
    int j=0;
    //inserting last k elements in ans array
    for(int i=n-k;i<n;i++){
        ansarr[j++]=arr[i];
    }
    //inserting first n-k elements in ans array
    for(int i=0;i<=k;i++){
        ansarr[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
       cout<<ansarr[i]<<" ";
    }

}
