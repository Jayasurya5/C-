#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool getBit(int number,int position){
    int leftShift = (1<<position);
    int value  = number & leftShift;
    return value!=0;
}

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

    cout<<getBit(5,2)<<endl;

    return 0;
  }