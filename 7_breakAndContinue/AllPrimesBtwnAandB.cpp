#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a,b;
    cin>>a;
    cin>>b;
    int num = 0;
    int index = 0;
    for(num = a; num <= b ; num++){
        for(index = 2; index < num ; index++){
            if(num % index == 0){
                break;
            }
        }
        if(index == num){
            cout<< num <<" is a prime\n";
        }
    }

    return 0;
}