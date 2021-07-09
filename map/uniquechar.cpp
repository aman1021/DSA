#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    string str;
    cin>> str;
    int n = str.length();
    map<char, int> m;
    for(int i = 0; i<n; i++){
        m[str[i]]++;
    }

    for(auto i : m){
        cout << i.first;
    }
    cout << endl;
}