#include<iostream>
using namespace std;

bool checkPalindrome(char array[100]){
    int noOfElements=0;
    while(array[noOfElements]!='\0'){
        noOfElements++;
    }
    int i=0;
    while(i< noOfElements){
        if(array[i]!= array[noOfElements-i-1]){
            return false;
        }
        i++;
    }
    return true;

}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char arr[100] = "apple";
    int i=0;

    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    char name[100];
    cin>>name;
    cout<<name<<endl;

    cout<<name[2]<<endl;

    bool flag = checkPalindrome(name);
    if(flag){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    
    return 0;
}