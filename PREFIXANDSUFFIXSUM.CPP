#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
cout<<"enter the no. of elements in array";
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
// vector<int>suffix(n);
// // suffix[0]=v[0];
// // for(int i=1;i<=n;i++){
// // suffix[i]=suffix[i-1] +v[i];
// // cout<<"suffix"<<" "<<i-1<<suffix[i-1]<<endl;
// // }

// /****     prefix sum          ***** */
  
//   for(int i=n-1;i>=0;i--){
//     if(i=5
//   ){suffix[n-1]=v[n-1];
//   }

//     suffix[i]=suffix[i+1]+v[i];
//     cout<<"suffix"<<i<<suffix[i]<<endl;

//   }
 bool divide( int v);
}
bool divide(vector<int>arr){
    int prefix =0,total_sum=0,n=arr.size();
   for(int i=0;i<n;i++)
    {total_sum+=arr[i];}

for(int i=0;i<n;i++){
    prefix+=arr[i];
    if(total_sum==prefix)
    return 1;
}
return 0;
}