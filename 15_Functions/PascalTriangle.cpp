#include <iostream>
#include <math.h>
using namespace std;

void printPascalTriangle(int rows);
int factorial(int number);
int printNCR(int n,int r);

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int rows;
  cin>>rows;

  printPascalTriangle(rows -1);
  return 0;

}

void printPascalTriangle(int rows){
    for(int i = 0 ; i <= rows;i++){
        for(int j =0; j <= i ; j++){
            cout<< printNCR(i,j)<<" ";
        }
        cout<<endl;
    }
}
int printNCR(int n,int r){
    int value = factorial(n)/(factorial(n-r)*factorial(r));
    return value;
}


int factorial(int number){
    if(number == 0){
        return 1;
    }
    int fact = 1;
    for(int i = 2; i<=number;i++){
        fact = fact * i;
    }
    return fact;
}
