#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number;
    cin>>number;
    int value = 1;
    for(int i = number ;i >= 1; i--){
        for(int j = 1 ; j<= i-1 ;j++){
                cout<<"  ";
        }
        for(int j = 1; j<= number;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
 

}  