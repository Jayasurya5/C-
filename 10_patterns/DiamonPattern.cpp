#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int number;
    cin>>number;

    for(int i= 1; i<= number;i++){
        for(int j = number - i;j>=1;j--){
            cout<<"  ";
        }
        for(int j = 1;j <= 2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i= number - 1; i>= 1;i--){
        for(int j = number - i;j>=1;j--){
            cout<<"  ";
        }
        for(int j = 1;j <= ((2*i)-1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}