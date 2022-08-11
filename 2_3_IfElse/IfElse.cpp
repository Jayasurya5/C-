#include<iostream>
using namespace std;
    int main()
    {
        #ifndef ONLINE_JUDGE 
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif   
        int savings;
        cin>>savings;
        if(savings>5000){
            cout<<"neha\n";
            if(savings>10000)
            {
                cout <<"road trip\n";
            }
            else{
                cout<<"shopping";
            }
        }
        else if(savings>2000){
            cout<<"preethi\n";
        }
        else{
            cout<<"friends\n";
        }
       return 0;
    } // namespace std
