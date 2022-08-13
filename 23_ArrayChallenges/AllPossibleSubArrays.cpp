#include <iostream>
using namespace std;

void allPossibleSubArrays(int array[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<array[k]<<" ";
            }cout<<"\n";
        }
    }
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  int array[] = {2,4,1,3,-9,7,5,6,8,9,10};
  int n = sizeof(array)/sizeof(array[0]); 

  allPossibleSubArrays(array,n);
  

  return 0;
}