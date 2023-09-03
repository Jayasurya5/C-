#include<iostream>
using namespace std;

bool findElement(int array[4][4],int n,int m,int value){
    int i=n-1,j=0;
    while(j<m){
        if(value == array[i][j]){
            cout<<i<<" "<<j<<endl;
            return true;
        }
        else if(value > array[i][j]){
            j++;
        }
        else{
            i--;
        }
    }
    return false;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m;
    // cin>>n>>m;
    n=4;m=4;
    int array1[4][4];

 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array1[i][j];
        }
    }
    int value = 10;
    findElement(array1,n,m,value);
    return 0;
}