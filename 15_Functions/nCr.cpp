#include <iostream>
#include <math.h>
using namespace std;

int factorial(int number);
int printNCR(int n,int r);
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int n,r;
  cin>>n>>r;

  int value = printNCR(n,r);
  cout<<value<<endl;
  return 0;
}

int printNCR(int n,int r){

    int value = factorial(n)/(factorial(n-r)*factorial(r));
}


int factorial(int number){
    int fact = 1;

    for(int i = 2; i<=number;i++){
        fact = fact * i;
    }
    return fact;
}
