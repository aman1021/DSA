#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int a[] = {1,1,2,4,5};
    int b[] = {3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    unordered_map<int, int> map;
    vector<int> v;
    for(auto i : a){
        if(map.find(i) == map.end()){
            map[i] = 1;
        }else{
            map[i]++;
        }
    }
    for(auto i : b){
        if(map.find(i) != map.end()){
            if(map[i] >0){
                v.push_back(i);
                map[i]--;
            }
        }
    }
    for(int i=0; i< v.size(); i++){
       cout<< v[i] <<endl;
    }
}