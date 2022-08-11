#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int pocketMoney = 3000;
    for(int date = 1; date < 30 ;date++){
        cout<<"before continue\n";
        if(date % 2 == 0){
            continue;
            //skips one loop
        }
        cout<<"go outside\n";
        pocketMoney = pocketMoney - 300;
        if(pocketMoney == 0){
            break;
        }
    } 
    return 0;
}