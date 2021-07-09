#include<iostream>
#include<unordered_map>
#include<cstdlib>
#define MAX 100000
using namespace std;
int main(){
    //unordered_map<int, bool> map;
    int a[] = {3,1,2,4};
    int n = sizeof(a)/sizeof(a[0]);
    
    bool map[MAX] = {false};
    for(int i=0; i<n; i++){
       map[a[i]] = true;
    }
    int count = 0;
    int k;
    cin>>k;
    for(int i=0; i<n; i++){
        int x = a[i];
        if(x-k >=0  && map[x-k]){
            count++;
        }
        if(x+k < MAX && map[x+k]){
            count++;
        }
        map[x] = false;
    }
  cout << count << '\n';
}