#include <iostream>
#include <climits>
using namespace std;

int longestArthematicSubArray(int array[],int n){
    int diff = 0;
    int prevDiff = 0;
    int currentCount=0;
    int highestCount=0;
    int startIndex = 0;
    int endIndex = 0;
    for(int i=0;i<n-1;i++){
       prevDiff = diff;
       diff = array[i+1]-array[i];
       if(diff == prevDiff){
        currentCount++;
        if(currentCount>highestCount){
        highestCount = currentCount;
        endIndex = i+1;
        }
       }
       else{
        currentCount = 0;
       }

    }
    startIndex = endIndex - highestCount - 1;

    int count = highestCount+2;

    cout<<count<<"\n"<<startIndex<<"\n"<<endIndex<<endl;

    // for(int i=0;i<n-1;i++){
    //    cout<<diffArray[i]<<endl;
    // }

    // for(int i=0;i<n-1;i++){

    //    if(diffArray[i]==diffArray[i+1]){
    //     currentCount++;
    //     if(currentCount>highestCount){
    //     highestCount = currentCount;
    //     }
    //    }
    //    else{
    //     currentCount = 0;
    //    }
    // }

    return 0;
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {1,13,4,3,2,4,6,8,10,1};
  int n = sizeof(array)/sizeof(array[0]);
 

  int sum = longestArthematicSubArray(array,n);
  

  return 0;
}