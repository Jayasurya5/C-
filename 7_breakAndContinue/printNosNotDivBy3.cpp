#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    for(int index = 1; index <= n; index++){
        if(index % 3 == 0){
            continue;
        }
        cout<< index <<"\n";
    }
    return 0;
}