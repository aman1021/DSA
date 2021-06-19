#include<bits/stdc++.h>
using namespace std;

long int strtoint(string s){
    if(s.length()==1){
        return s[0] -'0';
    }

    long int ans = strtoint(s.substr(0,s.length()-1));

    long int sum = s[s.length() - 1] - '0'; //it will take the last element of string and then subtract with string 0.
    sum = ans *10 + sum;
    return sum;

}

int main(){
    string n;
    cin>>n;
    cout<< n.substr(0,n.length()-1)<<endl;
    cout<< strtoint(n)<<endl;
}