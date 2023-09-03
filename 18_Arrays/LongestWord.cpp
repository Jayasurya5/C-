#include<iostream>
using namespace std;

void longestWord(char array[100]){
    int noOfElements = 0;
    while(array[noOfElements]!= '\0'){
        noOfElements++;
    }

// Highest count 
// Present count
// Old I j
// New I j 
// I
// j
    int maxCount=0;
    int presentCount=0;
    int startIndex=0,endIndex=0;
    int i=0,j=0;
    while(1){
        
        if(array[j] == ' ' || array[j] == '\0'){
            if(maxCount<presentCount){
                startIndex = i;
                endIndex = j;  
                maxCount = presentCount; 
                presentCount = 0; 
            }
            i=j+1;
        }
        presentCount++;
        j++;
        if(array[j] == '\0'){
            break;
        }
    }

    for(int i=startIndex;i<endIndex;i++){
        cout<<array[i];
    }
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char array[100];
    cin.getline(array,100);
    longestWord(array);
    
    return 0;
}