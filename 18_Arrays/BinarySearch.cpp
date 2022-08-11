#include <iostream>
#include <math.h>
using namespace std;

int binarSearch(int array[],int n,int value){
    int start = 0;
    int end = n;
    int middle ; 
    while(start<=end){
        middle = (start + end)/2;
        if(value == array[middle]){
            return middle;
        }
        else if(value < array[middle]){
            end = middle-1;
        }
        else{
            start = middle+1;
        }
    }
    return -1;
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int n;
  cin>>n;
  

  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  
  cout<<"enter the number to search"<<endl;
    
  int value;
  cin>>value;

  int index = binarSearch(array,n,value);
  
  if(index == -1){
    cout<<"the value is not in the list";
  }
  else{
    cout<<"position of the element in array is "<<index+1;
  }
  return 0;
}