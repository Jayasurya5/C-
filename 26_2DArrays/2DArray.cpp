#include<iostream>
using namespace std;

void print2DArray(int array[3][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void searchForElement(int array[3][3],int n,int m,int element){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(array[i][j]==element){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m;
    // cin>>n>>m;
    n=3;m=3;
    int array[3][3];

    //taking input

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    
    //printing output
    print2DArray(array,3,3);
    searchForElement(array,3,3,4);

    return 0;
}