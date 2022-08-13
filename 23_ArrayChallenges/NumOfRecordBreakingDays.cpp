#include <iostream>
#include <climits>
using namespace std;

int recordBreakingDays(int array[],int n){
    int max = INT_MIN;
    bool maxFlag = false;
    int count=0;
    for(int i=0;i<n;i++){
    if(array[i]>max){
        max = array[i];
        maxFlag = true;
    }
    if(i==n-1 && maxFlag){
        count++;
    }
    if(maxFlag && (array[i]>array[i+1])){
        count++;
    }
    maxFlag = false;
    }
    return count;
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {10,1,4,3,2,14,6,18,10,100};
  int n = sizeof(array)/sizeof(array[0]);
 

  int count = recordBreakingDays(array,n);
  cout<<count;
  

  return 0;
}