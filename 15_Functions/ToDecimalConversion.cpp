#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int number){
  int lastDigit;
  int base = 1;
  int answer = 0;
  while(number > 0){
    lastDigit = number%10;
    answer = lastDigit*base + answer;
    base = base*2;
    number = number/10;
  }
  return answer;
}

int octaToDecimal(int number){
  int lastDigit;
  int base = 1;
  int answer = 0;
  while(number > 0){
    lastDigit = number%10;
    answer = lastDigit*base + answer;
    base = base*8;
    number = number/10;
  }
  return answer;
}

int hexaToDecimal(string hexaNum){
    int stringSize = hexaNum.size();
    int base = 1;
    int answer = 0;
    int lastDigit;
    for(int i = stringSize - 1;i>=0;i--){  
        if(hexaNum[i] >='0' && hexaNum[i]<='9'){
            lastDigit = (hexaNum[i]-'0');
        }
        else if(hexaNum[i] >='A' && hexaNum[i]<='F'){
            lastDigit = (hexaNum[i]-'A'+10);
        }
        answer = answer + lastDigit*base;
        base = base*16;
    }
    return answer;
}


int decimalToBinary(int number){
    int lastDigit;
    int answer = 0;
    int base = 1;
    while(number>0){
        lastDigit = number%2;
        answer = answer + lastDigit*base;
        base = base*10;
        number = number/2;
    }
    return answer;
}

int decimalToOcta(int number){
    int lastDigit ;
    int answer = 0;
    int base = 1;
    while(number>0){
        lastDigit = number%8;
        answer = answer + lastDigit*base;
        base = base*10;
        number = number/8;
    }
    return answer;
}

string decimalToHexa(int number){
    int lastDigit;
    string answer = ""; 
    int base =1;
    while(number>0){
        lastDigit = number%16;
        if(lastDigit <= 9 ){ 
            char c = '0'+lastDigit;   
            answer.push_back(c);
        }
        else{
           char c = 'A'+ lastDigit - 10;
           answer.push_back(c);
        }
        number = number/16;

    }
    return answer;
}

void reverseString(string& str){
    int n = str.size();
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]);
    }
}

int reverse(int n){
    int ans = 0;
    int lastDigit;
    while(n>0){
        lastDigit = n%10;
        ans = ans*10+ lastDigit;
        n = n/10;
    }
    return ans;
}

int addTwoBinary(int a,int b){
    int answer = 0;
    int prevCarry = 0 ;

    while(a>0 && b>0){
        if(a%2 == 0 && b%2 ==0){
            answer = answer*10 + prevCarry;
            prevCarry = 0;
        }
        if((a%2 == 0 && b%2 ==1)||(a%2 == 1 && b%2 ==0)){
            
            if(prevCarry==1){
            answer = answer*10 + 0;
            prevCarry = 1;
            }
            else{
                answer = answer*10 + 1;
                prevCarry = 0;
            }

        }
        else{
            answer = answer*10 + prevCarry;//as 1+1
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while(a>0){
        if(prevCarry == 1){
            if(a%2 == 1){
                answer = answer*10 + 0;
                prevCarry = 1;
            }
            else{
                answer = answer*10+1;
                prevCarry = 0 ;
            }  
        }
        else{
            answer = answer*10 + (a%2);
        }
        a /=10;
    }
    while(b>0){
        if(prevCarry == 1){
            if(b%2 == 1){
                answer = answer*10 + 0;
                prevCarry = 1;
            }
            else{
                answer = answer*10+1;
                prevCarry = 0 ;
            }  
        }
        else{
            answer = answer*10 + (b%2);
        }
        b/=10;
    }
    if(prevCarry == 1){
        answer = answer*10 + 1;
    }
    answer  = reverse(answer);
    return answer;
}


// int addTwoBinary(int n1,int n2){
//     int answer = 0;
//     int carry=0;
//     int sum;
//     int base = 1;
//     int d1,d2,lastDigit;
//     while(n1>0 || n2>0){
//         d1 = n1%10;
//         d2 = n2%10;
//         if((carry+d1+d2)==0){
//             answer = answer + 0*base;
//             carry = 0;
//         }
//         else if((carry+d1+d2)==1){
//             answer = answer + 1*base;
//             lastDigit = 1;
//             carry = 0;
//         }
//         else if((carry+d1+d2)==2){
//             answer = answer*10 + 0;
//             lastDigit = 0;
//             carry = 1;
//         }
//         else{
//             answer = answer + 1*base;
//             lastDigit = 1;
//             carry = 1;
//         }

//         if(n1/10 == 0 && n2/10 == 0){
//                 answer = answer + carry*base;
//             }
//         base = base*10;
//         n1 = n1/10;
//         n2 = n2/10;
//     }

//     return answer;
// }


int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

  int n1,n2;
  cin>>n1>>n2;
  
  int answer = addTwoBinary(n1,n2);
//   string answer = decimalToHexa(number);
//   reverseString(answer);
  
  cout<<answer<<endl;


  return 0;
} 
    




