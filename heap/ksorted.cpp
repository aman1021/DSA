#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int a[] = {6,5,3,2,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    cin>>k;
    priority_queue<int, vector<int>, greater<int>> minh;
    vector<int> v;
    for(int i = 0; i<n; i++){
        minh.push(a[i]);
        if(minh.size() > k){
            v.push_back(minh.top());
            minh.pop();
        }
    }

    while(minh.size() > 0){
        v.push_back(minh.top());
        minh.pop();
    }
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }

    cout << '\n';
}