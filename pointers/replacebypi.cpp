#include<bits/stdc++.h>
using namespace std;

string replacepi(string s){
    if(s.length()==0 || s.length()==1){
        return s;
    }
    if(s[0]=='p' && s[1]=='i'){
        string smalloutput = replacepi(s.substr(2));
        return "3.14" + smalloutput;
    }else{
        return s[0]+replacepi(s.substr(1));
    }
}


int main(){
    /*string str = "3.14";
    cout<<str.at(1)<<endl;  //output is the dot .   .
    cout<< str.length()<<endl; //output is 4*/
   string str;
   cin>>str;
    string output = replacepi(str);
    cout<< output <<endl;
   
    
}