#include <iostream>
using namespace std;

int subArrayWithGivenSum(int array[],int n,int sum){
    int i=0;
    int j=0;
    int currSum = 0 ;
    int start = -1;
    int end = -1;
    // while(j<n && ((currSum+array[j])<=sum)){
    //         currSum+=array[j];
    //         j++;
    //     }
    // if(currSum == sum){
    //     cout<< i+1 <<" "<<j<<endl;
    //     return 0;
    // }
    while(j<n){
            currSum += array[j];
            while(currSum>sum){
                currSum -= array[i];
                i++;
            }
            if(currSum == sum){
                start = i+1;
                end = j+1;
                break;
            }
            j++;
    }
    cout<<start<<"\n"<<end<<endl;
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  int sum = 100;
  int array[] = {13,1,2,5,9,7,1,40,20,40,100};
  int n = sizeof(array)/sizeof(array[0]);
 

  subArrayWithGivenSum(array,n,sum);
  
  

  return 0;
}