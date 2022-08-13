#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int array[],int n){
    int maxSum = INT_MIN;
    int sum = 0;
    int i,j;
    int prevSum;
    // for(int i=0;i<n;i++){
    //     int sum = 0;
    //     for(int j=i;j<n;j++){
    //         sum = sum + array[j];
    //     }
    //     maxSum = max(maxSum,sum);
    // }//brute force approach

    // int currSum[n+1];
    // currSum[0]=0;
    // for(int i=1;i<=n;i++){
    //     currSum[i] = currSum[i-1]+array[i-1];
    // }

    // for(int i=1;i<=n;i++){
    //     int sum = 0 ;
    //     for(int j=0;j<i;j++){
    //         sum = currSum[i]-currSum[j];
    //         maxSum = max(sum,maxSum);
    //     }
    // }
    int currentSum = 0;
    for(int i=0;i<n;i++){
        currentSum = currentSum+array[i];
        if(currentSum<0){
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum);
    }//kaden's algorithm

    return maxSum;
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  int array[] = {2,400,1,2,-9,7,-10};
  int n = sizeof(array)/sizeof(array[0]); 

  int maxSum = maxSubArraySum(array,n);
  
  cout<<maxSum;

  return 0;
}