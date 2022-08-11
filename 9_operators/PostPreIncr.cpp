#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int i = 1;
    i = i++ + ++i;
//      1   +   3
    cout<<i<<endl;
    
    i= 1;
    int j = 2;
    int k;

    k = i + j + i++ + j++ + ++i + ++j;
//      1 + 2 + 1   + 2   +   3 +   4
    cout<<k<<endl;

    i = 0; 

    i = i++ - --i + ++i - i-- ; 
//      0   -   0 +   1 - 1 
    cout<<i<<endl;

    i = 1;
    j = 2;
    k = 3;

    int m = i-- - j-- - k--;
//          1   - 2   - 3
    cout<<i<<endl; // 0
    cout<<j<<endl; // 1
    cout<<k<<endl; // 2
    cout<<m<<endl; //

    return 0;
}   `