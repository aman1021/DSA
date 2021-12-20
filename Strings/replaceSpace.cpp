#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string s){
       
       string temp = "";
    for(int i = 0; i< s.length(); i++){
            if(s[i] == ' '){
                temp+="@40";
            }else{
                temp+=s[i];
            }
    }

    return temp;
}
int main(){
    string s;
    getline(cin, s);

    cout<<replaceSpaces(s)<<endl;
}