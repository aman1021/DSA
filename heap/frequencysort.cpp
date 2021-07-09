#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
    int a[] = {1,1,1,3,2,2,4};
    int n = sizeof(a)/sizeof(a[0]);
    unordered_map<int, int> map;
    priority_queue<pair<int, int>> maxh;
    for(int i = 0; i < n; i++ ){
        map[a[i]]++;
    }
    for(auto i = map.begin(); i!=map.end(); i++){
        maxh.push({i->second, i->first});
    }

    while(maxh.size()  >0){
        for(int i=0;i<maxh.top().first; i++){
            cout << maxh.top().second << " ";
        }
        maxh.pop();
    }
    cout<<'\n';
}