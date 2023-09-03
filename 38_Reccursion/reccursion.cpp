#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int sumOfFirstNNumbers(int num){
    if(num == 0){
        return 0;
    }
    int prevSum = sumOfFirstNNumbers(num-1);
    return num + prevSum;
}

int nPowerP(int n,int p){
    if(p == 0){
        return 1;
    }
    return n * nPowerP(n,p-1);
}

int nFactorial(int n){
    if(n == 0){
        return 1;
    }
    return n*nFactorial(n-1);
}

int fibbanociNumber(int n){
    if(n == 0 || n ==1 ){
        return n;
    }
    return fibbanociNumber(n-1)+fibbanociNumber(n-2);
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif 
    int sum = sumOfFirstNNumbers(4);
    cout<<sum<<endl;

    cout<<nPowerP(4,3)<<endl;
    cout<<nFactorial(5)<<endl;
    cout<<fibbanociNumber(9)<<endl;
    return 0;
}