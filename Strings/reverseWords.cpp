#include<bits/stdc++.h>
using namespace std;

//INPUT = the sky is blue.
//OUTPUT = blue is sky the

string reverseWords(string s){
          vector<string> temp;
          
          for(int i =0; i < s.length(); i++){
              string currStr;
              while(s[i] != ' ' && i<s.length()){
                  currStr+=s[i]; //Concatenating every character of a particular word of string s in currrstr and pushback in vector temp.
                  i++;
              }
              temp.push_back(currStr);
              if(i < s.length()){
                  temp.push_back(" ");
              }
          }

          string ans = "";
          for(int i = 0; i< temp.size(); i++){
                  ans+=temp[temp.size() - i - 1]; //Concatenating every word and space in vector temp with string ans 
                                                   //and returning the ans as reverse words.
          }

          return ans;
}
int main(){
    string s;
    getline(cin, s);

    cout<< "The reverse words are :- "<< endl;

    
     string ans =  reverseWords(s);

     cout << ans << endl;
}