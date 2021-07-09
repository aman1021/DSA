#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int main(){
    int a[] = {1,1,1,3,2,2,4};
    int n = sizeof(a)/sizeof(a[0]);
    int k; 
    cin>>k;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
    unordered_map<int, int> map;
    for(int i =0; i<n; i++){
        map[a[i]]++;
    }

    for(auto i = map.begin(); i!=map.end(); i++){
        minh.push({i->second, i->first});
        if(minh.size() > k){
            minh.pop();
        }
    }

    while(minh.size() > 0){
        cout << minh.top().second << " ";
        minh.pop();
    }

    cout << '\n';
}