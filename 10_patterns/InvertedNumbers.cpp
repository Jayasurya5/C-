#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number;
    cin>>number;
    int j;
    for(int i = number ;i >= 1; i--){
        for(int j = 1 ; j<= i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
 

}  