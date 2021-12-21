#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s){
        string ans;
        ans.push_back(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == ans.back())
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
}

int main(){
    string s;
    cin>>s;

    cout<< removeDuplicates(s)<<endl;
}