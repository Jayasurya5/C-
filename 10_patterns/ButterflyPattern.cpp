#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number;
    cin>>number;
    int j;
    for(int i = 1 ;i <= number;i++)
    {
        for(j = 1; j <= i;j++){
            cout<<"* ";
        }
        for(int k = 1; k <= number - i; k++){
            cout<<"    ";
        }
        for(j = 1; j <= i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    for(int i = number ;i >= 1; i--)
    {
        for(j = 1; j <= i;j++){
            cout<<"* ";
        }
        for(int k = 1; k <= number - i; k++){
            cout<<"    ";
        }
        for(j = 1; j <= i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    // for(int i = 1; i <= number; i++){
    //     for(int j = 1 ; j <= number - i + 1; j++){
    //         cout<<"* ";
    //     }
    //     for(int k = 1 ; k <= i -1 ; k++){
    //         cout<<"    ";
    //     }
    //     for(int j = 1 ; j <= number - i + 1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }
    return 0;
    //inner row is column
    //outer for loop is row

}  