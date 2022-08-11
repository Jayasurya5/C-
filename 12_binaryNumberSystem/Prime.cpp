#include <iostream>
#include <math.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int number;
    cin>>number;
    int flag = 0;
    for(int i = 2; i <=sqrt(number) ;i++){
        if((number % i) == 0){
            cout<<"not a prime";
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"prime";
    }

    return 0;
}