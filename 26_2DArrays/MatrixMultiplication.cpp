#include<iostream>
using namespace std;

void multiplyTwoMatrices(int array1[5][5],int array2[5][5],int n,int m,int p,int q){
    if(m != p){
        cout<<"the matrix multiplication is not possible";
        return;
    }
    n=5;q=5;
    int prodArray[5][5];
    int value = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            value = 0;
            for(int k=0;k<m;k++){
                value += (array1[i][k]*array2[k][j]); 
            }
            prodArray[i][j]= value;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<prodArray[i][j]<<" "; 
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
    n=5;m=5;
    int array1[5][5];

 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array1[i][j];
        }
    }
    int p=5,q=5;
    int array2[5][5];
    //taking input
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>array2[i][j];
        }
    }
    
    multiplyTwoMatrices(array1,array2,n,m,p,q);
    return 0;
}