#include<iostream>
using namespace std;

void printSpiral(int array[5][6],int n,int m){
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;

    while((row_start <= row_end) && (col_start<=col_end)){
        for(int col=col_start;col<=col_end;col++){
            cout<<array[row_start][col]<<" ";
        }
        row_start++;
        for(int row = row_start;row<=row_end;row++){
            cout<<array[row][col_end]<<" ";
        }
        col_end--;
        for(int col = col_end;col>=col_start;col--){
            cout<<array[row_end][col]<<" ";
        }
        row_end--;
        for(int row = row_end; row>=row_start;row--){
            cout<<array[row][col_start]<<" ";
        }
        col_start++;
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
    
    printSpiral(array,n,m);
    return 0;
}