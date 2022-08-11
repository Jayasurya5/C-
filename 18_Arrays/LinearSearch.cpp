#include <iostream>
#include <math.h>
using namespace std;

int linearSearch(int[] array,int n,int value);
{
    for(int index = 0 ;index<n;index++){
        if(array[index]== value){
            return index;
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
    cin>>array[n];
  }
  
    cout<<"enter the number to search"<<endl;
    
  int value;
  cin>>value;

  int index = linearSearch(array,n,value);
  
  if(index == -1){
    cout<<"the value is not in the list";
  }
  else{
    cout<<index;
    }
  return 0;
}