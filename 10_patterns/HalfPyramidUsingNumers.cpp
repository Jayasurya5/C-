#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number;
    cin>>number;
    for(int i = 1 ;i <= number;i++)
    {
        for(int j = 1; j <= i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
    //inner row is column
    //outer for loop is row

}  