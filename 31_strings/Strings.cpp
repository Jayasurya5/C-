#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif  

    string str;
    cin>>str;
    cout<<str<<endl;

    string str1(5,'n');
    cout<<str1<<endl;

    string str2 = "Jayasurya";
    cout<<str2<<endl;

    string str3;
    getline(cin,str3);
    cout<<str3<<endl;

    //apend two strings
    string s1 = "fam";
    string s2 = "ily";

    s1.append(s2);
    cout<<s1<<endl;

    cout<<s1+s2<<endl;

    s1 =s1+s2;
    cout<<s1<<endl;

    cout<<s1[1]<<endl;

    string abc = " asdasfsd  sdf sd sd sds fdsfa";
    cout<<abc<<endl;
    
    abc.clear();
    cout<<abc<<endl;

    s1 = "abc";
    s2 = "xyz";
    cout<<s1.compare(s2)<<endl;
    cout<<s2.compare(s1)<<endl;
    cout<<s1.compare(s1)<<endl;

    
    cout<<s1.empty()<<endl;
    s1.clear();
    cout<<s1.empty()<<endl;

    s1 = "nincompoop";
    s1.erase(3,3);
    cout<<s1<<endl;

    cout<<s1.find("poo")<<endl;

    s1.insert(2,"lol");
    cout<<s1<<endl;
    
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    string s = s1.substr(6,4);
    cout<<s<<endl;

    //string to integer
    s1 = "786";
    int x = stoi(s1);
    cout<<x+2<<endl;

    int y = 434323;
    cout<<to_string(y)+"2"<<endl;


    s1= "sadaqsdfew3qq";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;

    //convert all values to Upper case 

    string mixed = "asadSADFAsadASDF";
    for(int i=0;i<mixed.size();i++){
        if(mixed[i]>='a'&& mixed[i]<='z'){
            mixed[i] -=32;
        }
    }
    cout<<mixed<<endl;

    //convert all values to lower case
    for(int i=0;i<mixed.size();i++){
        if(mixed[i]>='A' && mixed[i]<='Z'){
            mixed[i]+=32;
        }
    }
    cout<<mixed<<endl;

    s = "asdasvasdeve";

    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    //beginning char of string,ending char of string,from where you want to change,to what
    cout<<s<<endl;

    //find biggest number in number string
    string numString = "123542023402340202343457868";
    sort(numString.begin(),numString.end(),greater<int>());
    cout<<numString<<endl;

    //find most frequent character
    s = "asasdfasdfsdffasdfasdfasafsfasdfsf";
    
    int freq[26];
    int indexOfFreq;
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0;i<s.size();i++){
        indexOfFreq = s[i]-'a';
        freq[indexOfFreq]++;
    }
    char letter;
    int maxFreq = 0;
    for(int i=0;i<26;i++){
        //maxFreq = max(maxFreq,freq[i]);
        if(freq[i]>maxFreq){
            maxFreq = freq[i];
            letter = 'a'+ i;
        }
    }
    cout<<letter<<" "<<maxFreq<<endl;




    return 0;
  }