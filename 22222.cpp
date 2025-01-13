#include <iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int main()
{  
int total =0;
int arr[3][3]={5,2,4,8,9,7,1,6,8};
for(int i=0;i<3;i++){

total+=arr[i][i];



}

cout<<total;



    }