#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n/2;i++)cout<<arr[i]<<" ";
    for(int i=(n/2)-1;i>=0;i--)cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=n-1;i>=n/2;i--)cout<<arr[i]<<" ";
    for(int i=n/2;i<n;i++)cout<<arr[i]<<" ";

}