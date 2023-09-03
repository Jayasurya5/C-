#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

std::string m_strStatusPathElide = "s71500>PLC123456789>DEVICE1>DEVICE2>DEVICE123456789";

std::string elideStatusPath(int changeWidth){
    std::string strPath = "";

    int pathlength = 0;
    int width = 640 + changeWidth;
    
    std::string path = m_strStatusPathElide;
    pathlength = path.size();
    std::string delimiter = ">";    
    int nPixelSize = 13;
    int minDiffVal = 5;

    int position = 0;
    std::vector<std::string> vPath;  
    while((position = path.find(delimiter))!= std::string::npos){
        std::string subStr = path.substr(0,position);
        vPath.push_back(subStr);
        path.erase(0,position+delimiter.size());
    }

    auto last = vPath.size() - 1;
    auto diff = pathlength - width/nPixelSize;

    for(int index = last;(index>=0)&&(diff>0);index--){
        int subStrSize = vPath[index].length();
        if(subStrSize > diff){
            vPath[index].replace(subStrSize-diff,diff,"...");
            diff = 0;
        }else{
            int nEllipses = 3;
            vPath[index]="...";
            diff = ((diff - subStrSize)+nEllipses);
        }
    }

    if(!vPath.empty()){
        if(0 == vPath[0].compare("...")){
            strPath = vPath[0]+">";
        }
        else{
            for(auto str:vPath){
                strPath += str;
                strPath += ">";
            }
        }
    }
    strPath +=path;
    return strPath;
}
int main(){
  #ifndef ONLINE_SHIELD
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  std::string str = elideStatusPath(-220);
  cout<<str;
  return 0;
}