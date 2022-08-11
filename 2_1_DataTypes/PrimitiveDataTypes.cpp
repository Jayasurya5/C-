#include<iostream>
using namespace std;
    int main()
    {
        int a = 12;
        cout<<"Size of int "<<sizeof(a)<<endl;

        float b = 12.45;
        cout<<"size of float "<<sizeof(b)<<endl;

        char c ;
        cout<<"size of char "<<sizeof(c)<<endl;

        bool d = true;
        cout<<"size of bool in bytes "<<sizeof(d)<<endl;

        short int si;
        long int li;
        cout<<"size of short int in bytes "<<sizeof(si)<<endl;
        cout<<"size of long int in bytes "<<sizeof(li)<<endl;
        

    } // namespace std
