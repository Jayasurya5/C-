#include <iostream>
#include <climits>
using namespace std;

int kaden(int array[],int n){
  int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0;i<n;i++){
        currentSum += array[i];
        if(currentSum < 0){
            currentSum = 0;
        } 
        maxSum = max(maxSum,currentSum);
    } 
    return maxSum;
}
int maxSubArraySum(int array[],int n){
    
    int wrapSum;
    int nonWrapSum = kaden(array,n);
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum +=array[i];
        array[i]= -array[i];
    }
    wrapSum = totalSum + kaden(array,n);
    return max(wrapSum,nonWrapSum);
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  int array[] = {4,-4,6,-6,10,-11,12};
  int n = sizeof(array)/sizeof(array[0]); 

  int maxSum = maxSubArraySum(array,n);
  
  cout<<maxSum;

  return 0;
}