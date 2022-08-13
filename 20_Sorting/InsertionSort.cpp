#include <iostream>
using namespace std;

void insertionSort(int array[],int n){
    for(int i=1;i<n;i++){
        int current = array[i];
        int j = i-1;
        while(array[j]>current && j>=0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1]=current;        
    }
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {20,13,4,3,4,4,4,4,2,1};
  int n = sizeof(array)/sizeof(array[0]);


  insertionSort(array,n); 

for(int i=0;i<n;i++){
  cout<<array[i]<<endl;
}

  return 0;
}