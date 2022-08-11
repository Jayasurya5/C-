#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number;
    cin>>number;
    int value = 1;
    for(int i = 1 ;i <= number; i++){
        for(int j = 1 ; j <= number - i ;j++){
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}  