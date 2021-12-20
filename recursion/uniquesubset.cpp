#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

vector<string> uniquesubset(string ip, string op, vector<string> &v){
      if(ip.length() == 0){
            v.push_back(op);
            return v;
      }

      string op1 = op;
      string op2 = op;
      op2.push_back(ip[0]);
      ip.erase(ip.begin() + 0);
      uniquesubset(ip, op1, v);
      uniquesubset(ip, op2, v);

      return v;
}

int main(){
      unordered_map<string, int> map;
      vector<string> v;
      string ip;
      cin>> ip;
      string op = " ";
      uniquesubset(ip, op, v);
      for(int i = 0 ; i< v.size(); i++){
            map[v[i]]++;
      }
      for(auto i : map){
            cout << i.first << " ";
      }

      cout <<'\n';
}
