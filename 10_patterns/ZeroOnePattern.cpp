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
        for(int i = 1 ;i <= 5; i++){
            for(int j = 1 ; j<= i;j++){
                if((i+j)%2 == 0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
        cout<<endl;
    }
    // for(int i = 1 ;i <= 5; i++){
    //     if(i % 2 == 0){
    //         value = 0; 
    //     }
    //     else{
    //         value = 1;
    //     }
    //     for(int j = 1 ; j<= i;j++){
    //         cout<< value<<" ";
    //         if(value == 1){
    //             value = 0 ;
    //         }
    //         else{
    //             value = 1;
    //         }
    //     }
    //     cout<<endl;
    // }
    return 0;
 

}  