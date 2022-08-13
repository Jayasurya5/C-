#include <iostream>
#include <climits>
using namespace std;


int sumOfSubArrays(int array[],int n){
    int current=0;
    int sum = 0;
    for(int i=0;i<n;i++){
        current = 0;
        for(int j=i;j<n; j++){
            current = current + array[j];
            //cout<<current<<endl;
            sum +=current;
        }
    }
    return sum;
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {1,13,4,3,20,4,4,24,2,1};
  int n = sizeof(array)/sizeof(array[0]);
 

  int sum = sumOfSubArrays(array,n);
  
  cout<<sum;

  return 0;
}