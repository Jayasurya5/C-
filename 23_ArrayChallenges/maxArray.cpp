#include <iostream>
#include <climits>
using namespace std;

void maxArray(int array[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
      if(max<array[i]){
        max = array[i];
      }  
      array[i]= max;
    }
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {1,13,4,3,20,4,4,24,2,1};
  int n = sizeof(array)/sizeof(array[0]);
 

  maxArray(array,n); 

for(int i=0;i<n;i++){
  cout<<array[i]<<endl;
}

  return 0;
}