#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    for(int i = 1 ; i <= n; i++){
        for (int j = 1 ; j <= n ; j++){
            if(j <= (n - i)){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    // for(int i = n ; i >= 1; i--){
    //     for(int j = 1; j <= (i-1) ; j++){
    //         cout<<"  ";
    //     }
    //     for(int k = 1; k <= n -i +1 ; k++ ){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }
        return 0;
    //inner row is column
    //outer for loop is row
}  