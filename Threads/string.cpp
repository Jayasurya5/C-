#include <stdio.h>
#include<iostream>
#include <string>
int main()
{
    
    std::string str = "aasdasd\\asasasd\\asad";
    
    int stringIndex = -1;
    // index = str.find("//",index + 1);
    // index = str.find("//",index + 1);
    int num = 2;
    for(int index=0;index<num;index++){
        stringIndex = str.find("\\",stringIndex+1);
    }
    std::string substring = str.substr(0,stringIndex+3);
    std::cout<<substring;
    return 0;
}
