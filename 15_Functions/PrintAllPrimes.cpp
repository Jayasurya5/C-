#include <iostream>
#include <math.h>
using namespace std;

void printAllPrimesBtwnTwoNums(int num1,int num2);
bool isPrime(int number);

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int num1,num2;
  cin>>num1>>num2;

  printAllPrimesBtwnTwoNums(num1,num2);

  return 0;
} 

void printAllPrimesBtwnTwoNums(int num1,int num2){
    for(int i = num1; i<= num2;i++){
        if(isPrime(i)){
            cout<<i<<" is a prime\n";
        }
    }
}

bool isPrime(int number){
    if(number==2){
        return true;
    }
    for(int i=2;i<=sqrt(number);i++){
        if(number%i == 0){
            return false;
        }
    }
    return true;
}


