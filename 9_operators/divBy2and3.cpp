#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number;
    cin>>number;

    if((number%2 ==0)&& (number%3 == 0)){
        cout<<"number is divisible by 2 and 3";
    }
    else if(number%2 ==0){
        cout<<"number is divisible by 2";
    }
    else if(number%3 ==0){
        cout<<"number is divisible by 3";
    }
    else{
        cout<<"number is not divisble by 2 or 3";
    }
    return 0;
}  