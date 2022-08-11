#include <iostream>
#include <math.h>
using namespace std;

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int number;
  cin>>number;
  
  int array[4] = {10,20,30,40};
  
  cout<<array[3]<<endl;

  int n;
  cin>>n;

  int arr2[n];
  
  for(int i=0;i<n;i++){
    cin>>arr2[i];
  }


  for(int i=0;i<n;i++){
    cout<<arr2[i]<<endl;
  }
  return 0;
} 