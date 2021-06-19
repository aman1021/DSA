#include<bits/stdc++.h>
using namespace std;

bool checkpalin(string str, int s, int e){
    if(e+1==0 ||  e==0){
        return true;
    }

    if(str[s] == str[e]){
        s++;
        e--;
        return true;
    }
    else{
        return false;
    }
    bool smallpalin = checkpalin(str,s,e);
}

int main(){
    string str;;
    cin>>str;

    int s = 0;

    int e = str.length()-1;

    cout << checkpalin(str,s,e)<<endl;

}
