#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseString(string str){
    if(str.length() == 0){
        return;
    }
    string ros = str.substr(1);
    reverseString(ros);
    cout<<str[0]<<" ";
}

void replacePI(string str){
    if(str.length() == 0){
        return;
    }
    if(str[0]=='p'&&str[1]=='i'){
        cout<<3.14;
        string restOfString = str.substr(2);
        replacePI(restOfString);
    }
    else{
        cout<<str[0];
        string restOfString = str.substr(1);
        replacePI(restOfString);
    }

}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif

  reverseString("binod");
  cout<<endl;
  replacePI("pipppipiiipiip");
  return 0;
}
