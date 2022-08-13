#include <iostream>
using namespace std;

int smallestPosMissingNo(int array[],int n){
    const int N= 1e6+2;
    bool check[N];

    for(int i=0;i<N;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(array[i]>=0){
            check[array[i]] = true;
        }
    }
    int ans = -1;

    for(int i=1;i<N;i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }
    return ans;
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  int array[] = {2,4,1,3,-9,7,5,6,8,9,10};
  int n = sizeof(array)/sizeof(array[0]);
 

  int num = smallestPosMissingNo(array,n);
  cout<<num;
  

  return 0;
}