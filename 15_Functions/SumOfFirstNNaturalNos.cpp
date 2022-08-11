#include <iostream>
#include <math.h>
using namespace std;

int sumOfFirstNNumbers(int number);

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int number;
  cin>>number;

  int sum = sumOfFirstNNumbers(number);
  cout<<sum;
  return 0;

}

int sumOfFirstNNumbers(int number){
    int sum = 0;
    for(int i = 1; i<=number;i++){
        sum += i ;
    }
    return sum;
}