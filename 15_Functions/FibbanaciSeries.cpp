#include <iostream>
#include <math.h>
using namespace std;
void printFibbanaciSeries(int number);

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
  
  int number;
  cin>>number;

  printFibbanaciSeries(number);

  return 0;
} 

void printFibbanaciSeries(int number){

    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for(int i = 0; i< number;i++){
        cout<<t1<<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
    




