#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int row,column;
    cin>>row;
    cin>>column;

    for(int i = 0;i<row;i++)
    {
        for(int j = 0; j<column;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
    //inner row is column
    //outer for loop is row

}  