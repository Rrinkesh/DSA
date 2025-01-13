#include <iostream>
#include<algorithm>

using namespace std;

int main()
{ 

int arr[3][3]={1,2,3,4,5,6,7,8,9};
int row=3,col=3;
int top=0,bottom=row-1,left=0,right=col-1;
while(top<=bottom&&left<=right){
//print top
for(int j=left;j<=right;j++){
    cout<<arr[top][j]<<endl;
    top++;
}
//print right
for(int j=top;j<=bottom;j++){
     cout<<arr[j][right]<<endl;
     right--;
}
//print bottom
if(top<=bottom){
for(int j=right;j>=left;j--){
cout<<arr[bottom][j]<<endl;
bottom--;

}}
//print left
if(left<=right){
for(int j=bottom;j>=top;j--){
cout<<arr[j][left]<<endl;
left++;
}}









}





}




    