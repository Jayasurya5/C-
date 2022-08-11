#include <iostream>
#include <math.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

//sum of qubes of number should be equall 
//same number
    int number;
    cin>>number;
    int originalNum = number;
    int lastDigit = 0;
    int calNum = 0;
    while(number>0){
        lastDigit = number%10;
        calNum = calNum + pow(lastDigit,3);
        number = number/10;
    }
    if(calNum == originalNum){
        cout<<"amstrong num";
    }
    else{
        cout<<"not amstrong";
    }
    return 0;
}