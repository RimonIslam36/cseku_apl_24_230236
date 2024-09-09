#include<iostream>
using namespace std;

/*int largestElementIndex(int arr[],int n)
{
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}*/
int seconLargestElement(int arr[],int n)
{
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }
    return second_max;

}
int main()
{
    int n,x;
    cin >>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cout<<seconLargestElement(arr,n)<<endl;
    /*int indexoflargest = largestElementIndex(arr,n);
    //arr[indexoflargest]=-1;
    int largestelement=arr[indexoflargest];
    for(int i=0;i<n;i++){
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }
    int indexofsecondlargest = largestElementIndex(arr,n);

    cout<<arr[indexofsecondlargest]<<endl;
    */


    return 0;
}


