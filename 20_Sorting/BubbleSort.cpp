#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[],int n){
    int i=0;
    for(i=1;i<n;i++){
        for(int j=0 ;j < n-i;j++){
            if(array[j]>array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    } //it works 
    // while(i<n){
    //     for(int j=0;j<=n-i;j++){
    //         if(array[j]>array[j+1]){
    //             swap(&array[j],&array[j+1]);
    //         }       
    //     }
    //     i++;
    // }
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {20,13,4,3,4,4,4,4,2,1};
  int n = sizeof(array)/sizeof(array[0]);


  bubbleSort(array,n); 

for(int i=0;i<n;i++){
  cout<<array[i]<<endl;
}

  return 0;
}