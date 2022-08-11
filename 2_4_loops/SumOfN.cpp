#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int n;
cin>>n;
int sum = 0;
int counter;
// for(counter = 1; counter <= n; counter++){
//     sum = sum + counter ; 
// }
counter = n;
while(counter > 0){
    sum = sum + counter;
    counter--;
}
cout<<sum;
return 0;
}