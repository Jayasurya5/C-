#include<iostream>
using namespace std;

void transposeMatrix(int array[5][6],int n,int m){
    n = 5;
    m = 6;
    int transposeArray[6][5];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transposeArray[j][i] = array[i][j]; 
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transposeArray[i][j]<<" "; 
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

    int n,m;
    // cin>>n>>m;
    n=5;m=6;
    int array[5][6];

    //taking input

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    
    transposeMatrix(array,n,m);
    return 0;
}