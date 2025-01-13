#include<iostream>
#include<vector>
using namespace std;
int main(){
    //*********SEGREGATE 0 &1*********** */
    // vector<int>arr={0,0,1,1,0};
    // int start=0;
    // int end=(arr.size())-1;
    // while(start<end){
    //     if(arr[start]==0){
    //         start++;
    //     }
    //     else{
    //         if(arr[end]==0){
    //             swap(arr[end],arr[start]);
    //             end--;
    //             start++;

    //         }
    //         end--;
    //     }
    // }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }

    /*********SUM OF TWO NUMS.************ */
   
   /*vector<int>arr={2,7,11,15};
    int target =9;
    int n=arr.size();
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<start<<endl<<end;
            break;
        }
        else if(arr[start]+arr[end]<target){
           start++;
        }
        else{
            end--;
        }
    }
    return 0;

*/
vector<int>arr={5,10,3,2,50,80};
auto first=arr.begin();
auto last =arr.end();
sort(first,last);

int start =0,end=1,n=arr.size();



























}






