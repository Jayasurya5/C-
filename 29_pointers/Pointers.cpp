#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp;
    temp= *a;
    *b=*a;
    *a=temp;
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  
    int a = 10;
    int* ptr = &a;
    cout<<a<<endl;
    cout<<*ptr<<endl;//DeReferencing
    cout<<endl;

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<endl;

    *ptr = 20;
    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<endl;

    ptr++;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<endl;

    int array[]={10,20,30};
    cout<<array<<endl;
    cout<<&array[0]<<endl;
    cout<<*array<<endl;
    cout<<endl; 

    int* ptrOfArray;
    ptrOfArray = array;

    for(int i=0;i<3;i++){
        cout<<*ptrOfArray<<" ";
        ptrOfArray++;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<*(array+i)<<" ";
        //array++;
    }
    cout<<endl;
    cout<<endl;

    int b= 10;
    int* p= &b;
    int** q= &p;
    //int* r = &p; cannot be done
    cout<<b<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<*q<<endl;

    int first=20,second=40;
    swap(first,second);
    cout<<first<<" "<<second<<endl;
    return 0;
}