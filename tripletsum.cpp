#include<iostream>
using namespace std;
int main(){
    int x=24;
    int arr[]={1,4,6,8,10,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0;i<n-2;i++){
   int ans=x-arr[i];
   int start=i+1,end=n-1;
   while (start<end)
   {
    if(arr[start]+arr[end]==ans){
    cout<<arr[start]<<endl<<arr[end]<<endl<<arr[i];
    break;}
    
    else if(arr[start]+arr[end]>ans){
    end--;}
    else{start++;}
   }
   
    }
}