#include <iostream>
using namespace std;

void firstRepeatingElement(int array[],int n){
    int element = array[0];
    int i;
    for(i=0;i<n;i++){
       element = array[i];
       for(int j=i+1;j<n;j++){
        if(element == array[j])
        {
          cout<<i<<"\n"<<element;
          return;
        }
       } 
    }
    
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int array[] = {13,1,4,3,4,14,6,18,10,100};
  int n = sizeof(array)/sizeof(array[0]);
 

  firstRepeatingElement(array,n);
  
  

  return 0;
}
