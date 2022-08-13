#include <iostream>
#include <climits>
using namespace std;

void pairSum(int array[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j = i;j<n;j++){
            if(array[i]+array[j] == sum && i!=j){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
}//brute force approach

// the array should be sorted
// void pairSum(int array[],int n,int sum){
//     int low = 0;
//     int high = n-1;

//     while(low<high){
//         if(array[low]+array[high] == sum){
//             cout<<low<<" "<<high<<endl;
//         }
//         else if(array[low]+array[high]>sum){
//             high--;
//         }
//         else{
//             low++;
//         }
//     }
// }



int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  int array[] = {4,-4,6,-6,10,-11,12};
  int n = sizeof(array)/sizeof(array[0]);  
  int sum =10;
  pairSum(array,n,sum);  
  return 0;
}