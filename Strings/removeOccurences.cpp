#include<bits/stdc++.h>
using namespace std;

string removeOccurencesOfpart(string s, string part){

    while(s.length()!=0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string s;
    cin>> s;
    string part;
    cin>>part;

    cout<<removeOccurencesOfpart(s, part)<<endl;
}