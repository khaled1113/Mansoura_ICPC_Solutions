#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]=='c'||arr[i]=='o'||arr[i]=='d'||arr[i]=='e'||arr[i]=='f'||arr[i]=='s'||arr[i]=='r')cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
