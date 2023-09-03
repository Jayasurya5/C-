#include<iostream>
using namespace std;

void transposeSquareMatrix(int array[5][5],int n){
    n = 5;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i<j){
    //             swap(array[i][j],array[j][i]); 
    //         }
    //     }
    // }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(array[i][j],array[j][i]); 
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<array[i][j]<<" "; 
        }
        cout<<endl;
    }

    return;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    // cin>>n>>m;
    n=5;
    int array[5][5];

    //taking input

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
    
    transposeSquareMatrix(array,n);

 
    return 0;
}