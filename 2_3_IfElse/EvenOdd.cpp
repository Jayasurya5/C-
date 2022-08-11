#include<iostream>
using namespace std;
    int main()
    {
        #ifndef ONLINE_JUDGE 
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif   
        int a;
        cin>>a;
        
        if(a == 1){
            cout<<"not even or odd";
        }
        else if(a % 2 == 0){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }
        return 0;
    } // namespace std
