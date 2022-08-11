#include <iostream>
#include <math.h>
using namespace std;

int factorial(int number);

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int number;
  cin>>number;

  int fact = factorial(number);
  cout<<fact<<endl;
  return 0;
}

int factorial(int number){
    int fact = 1;

    for(int i = 2; i<=number;i++){
        fact = fact * i;
    }
    return fact;
}
