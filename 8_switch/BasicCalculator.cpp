#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
//basic Calculator

    int firstNum,secondNum;
    cout<<"Enter two numbers\n";
    cin>>firstNum;
    cin>>secondNum;
    
    cout<<"Select the Options in + - / % *\n";
    
    char operation;
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<< firstNum + secondNum;
        break;
    case '-':
        cout<< firstNum - secondNum;
        break;
    case '/':
        cout<< firstNum / secondNum;
        break;
    case '%':
        cout<< firstNum % secondNum;
        break;
    case '*':
        cout<< firstNum * secondNum;
        break;
    default:
        cout<<"not a valid operation";
        break;
    }
    return 0;
    
}