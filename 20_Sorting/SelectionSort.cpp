#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[],int n){
    for(int i=0;i<n;i++){
        for(int j = i ;j< n ;j++){
            if(array[j]<array[i]){
                swap(&array[i],&array[j]);
            }
        }
    }
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {20,13,4,3,4,4,4,4,2,1};
  int n = sizeof(array)/sizeof(array[0]);


  selectionSort(array,n); 

for(int i=0;i<n;i++){
  cout<<array[i]<<endl;
}

  return 0;
}