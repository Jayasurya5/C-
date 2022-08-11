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
    int reverseNum = 0;
    int lastDigit = 0 ;
    while(number>0){
        lastDigit = number%10;
        reverseNum = reverseNum*10 +lastDigit;
        number = number/10;
    }
    cout<<reverseNum;
    return 0;
}