#include <iostream>
#include <math.h>
using namespace std;

int sumOfFirstNNumbers(int number);

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int n1,n2,n3;
  cin>>n1>>n2>>n3;

  bool result = pythogarusCheck(n1,n2,n3);
  return 0;

}

bool pythogarusCheck(int n1,int n2,int n3){
    pow(max,2) =  
}

int maxof3Numbers(int n1,int n2,int n3){
    if(n1>n2 && n1>n3){
        return 1;
    }
    else if(n2>n3){
        return 2;
    }
    else{
        return 3;
    }
}

