#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void towerOfHanoi(int n,char src,char dest,char helper){
   if(n==0){
    return;
   }
   towerOfHanoi(n-1,src,helper,dest);
   cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
   towerOfHanoi(n-1,helper,dest,src);
}
string removeDuplicate(string str){
    if(str.length()==0){
        return "";
    }
    char ch = str[0];
    string ans= removeDuplicate(str.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}

string moveAllX(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = moveAllX(s.substr(1));

    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
    towerOfHanoi(4,'A','C','B');
    cout<<removeDuplicate("aaaaaa33333333dddddddddsssss")<<endl;
    cout<<moveAllX("aaaaaxxxxxaxaxaxaxaaa")<<endl;
    return 0;
}