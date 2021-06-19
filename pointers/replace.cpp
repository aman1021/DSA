#include<bits/stdc++.h>
using namespace std;

void replacechar(char s[], char c1, char c2){
    if(s[0] == '\0'){
        return ;
    }
     
     if(s[0] == c1){
         s[0] = c2;
     }
         return replacechar(s+1,c1,c2);

}

int main(){
    char str[100000];
    cin>> str;
    char p;
    cin>> p;
    char q;
    cin>>q;
    replacechar(str,p,q);
    cout<< str<<endl;
    return 0;
}