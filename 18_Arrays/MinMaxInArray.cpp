#include <iostream>
#include <climits>
using namespace std;

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
    
    int min = array[0];
    int max = array[0];
    
    for(int i=0;i<n;i++){
        if(min >= array[i]){
            min = array[i];
        }
        if(max <= array[i]){
            max = array[i];
        }
    }
    cout<<min<<"  "<<max<<endl;  
    return 0;
} 