#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
//given input say hello in diff language
    char button;
    cin>>button;

    switch (button)
    {
        case 'a':
            cout<<"hello";
            break;
        case 'b':
            cout<<"namaste";
            break;
        case 'c':
            cout<<"hola";
            break;
        case 'd':
            cout<<"Salut";
            break;
        case 'e':
            cout<<"caio";
            break;
        default:
            cout<<"Invalid Button";
            break;
    }
    return 0;
    
}