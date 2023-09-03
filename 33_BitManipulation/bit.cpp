#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool getBit(int number,int position){
    int leftShift = (1<<position);
    int value  = number & leftShift;
    return (value!=0);
}

int setBit(int number,int position){
  int leftShift = (1<<position);
  int value = number | leftShift;
  return value;
}

int clearBit(int number,int position){
  int leftShift = (1<<position);
  int negation = ~leftShift;
  int value = negation & number;
  return value; 
}

int updateBit(int number, int position,int updatedValue){
  int mask = ~(1<<position);
  number = number & mask;
  return (number |(updatedValue << position));
  
}

bool isNumDividedBy2(int number){
  int neg = ~(number);
  int value = neg & 1;
  return value;
}

bool isPowerOf2(int number){
  return (number && !(number & (number-1)));
}

int numOfOnesInNumber(int number){
  int count = 0;
  while(number){
    number = number & number-1;
    count++;
  }
  return count;
}

void subSets(int arr[],int n){
  for(int i=0; i< (1<<n);i++){
    for(int j=0;j<n;j++){
      if(i&(1<<j)){
        cout<<arr[j]<<" ";
      }
    }cout<<endl;
  }
}
int uniqueNumber(int arr[],int n){
  int xorSum = 0;
  for(int i=0;i<n;i++){
    xorSum = xorSum^arr[i]; 
  }
  return xorSum;
}

void twoUniqueNumbers(int arr[],int n){
  int xorSum = 0;
  for(int i=0;i<n;i++){
    xorSum = xorSum^arr[i]; 
  }
  int tempxor = xorSum;
  int setBit =0;
  int pos =0;
  while(setBit != 1){
    setBit = xorSum & 1;
    pos++;
    xorSum = xorSum>>1;
  }
  int newXor = 0;
  for(int i=0;i<n;i++){
    if(getBit(arr[i],pos-1)){
      newXor = newXor ^ arr[i];
    }
  }
  cout<<newXor<<endl;
  cout<<(tempxor^newXor)<<endl;
}

int unique(int arr[],int n){
  int result = 0;
  for(int position=0;position<64;position++){
    int sum = 0;
    for(int j=0;j<n;j++){
      if(getBit(arr[j],position)){
        sum++;
      }
    }
    if(sum%3 !=0){
      result = setBit(result,position);
    }
  }
  return result;
}

void primeSieve(int n){
  int prime[100] = {0};
  for(int i=2;i<=n;i++){
    if(prime[i]==0){
      for(int j=i*i;j<=n;j+=i){
        prime[i] = 1;
      }
    }
  }
  for(int i=2;i<=n;i++){
    if(prime[i]==0){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

int primeFactor(int n){
  int spf[100]={0};
  for(int i=2;i<=n;i++){
    spf[i]=i;
  }

  for(int i=2;i<=n;i++){
    if(spf[i]==i){
      for(int j=i*i;j<=n;j+=i){
        if(spf[j]==j){
          spf[j] = i;
        }
      }
    }
  }
  while(n!=1){
    cout<<spf[n]<<" ";
    n = n/spf[n];
  }
}

int divisible(int n,int a,int b){
  int c1 = n/a;
  int c2 = n/b;
  int c3 = n/(a*b);

  return c1+c2-c3;
}

int gcd(int a,int b){
  while(b!=0){
    int rem = a%b;
    a = b;
    b = rem;
  }
  return a;
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

    cout<<getBit(4,2)<<endl;
    cout<<setBit(4,0)<<endl;
    cout<<clearBit(4,2)<<endl;
    cout<<updateBit(4,3,1)<<endl;
    cout<<isNumDividedBy2(4)<<endl;
    cout<<isPowerOf2(4)<<endl;
    cout<<numOfOnesInNumber(19)<<endl;
    int arr[4] = {1,2,3,4};
    subSets(arr,4);
    int arr1[] = {2,2,3,3,4,4,6};
    cout<<uniqueNumber(arr1,7)<<endl;
    int arr2[] = {2,2,3,3,4,4,6,9};
    twoUniqueNumbers(arr2,8);
    int arr3[] = {2,2,3,3,2,4,4,4,3,9};
    cout<<unique(arr3,10);
    primeSieve(30);
    primeFactor(40);
    cout<<endl;
    cout<<divisible(40,5,7)<<endl;
    cout<<gcd(10,3);
    return 0;
  }