#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int number;
    cin>>number;
    int index = 0;
    for(index = 2; index < number; index++){
        if(number % index == 0){
            cout << "not a prime";
            break;
        }
    }
    if( index == number)
    {
        cout<<"prime";
    }

    return 0;
}