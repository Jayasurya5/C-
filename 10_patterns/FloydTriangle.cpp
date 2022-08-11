#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int rows;
    cin>>rows;
    int number = 1;
    for(int i = 1 ;i <= rows;i++)
    {
        for(int j = 1; j <= i;j++){
            cout<<number<<" ";
            number++;
        }
        cout<<"\n";
    }
    return 0;
    //inner row is column
    //outer for loop is row

}  