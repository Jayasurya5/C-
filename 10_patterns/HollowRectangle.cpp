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

    for(int i = 1;i <= row; i++)
    {
        for(int j = 1; j <= column ; j++){
            if(j == 1 || j == column || i == 1 || i == row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
    //inner row is column
    //outer for loop is row

}  