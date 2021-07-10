#include<iostream>
#include<queue>
using namespace std;
int main(){
    int a[4][2] = {{1,3}, {-2,2}, {5,8}, {0,1}};
    int n = sizeof(a)/sizeof(a[0]);
    priority_queue<pair<int, pair<int, int>>> maxh;
    int k;
    cin>>k;
    for(int i = 0; i<n; i++){

        maxh.push({a[i][0]*a[i][0] + a[i][1]*a[i][1], {a[i][0], a[i][1]}});

        if(maxh.size()>k){
            maxh.pop();
        }
    }

    while(maxh.size() > 0){

        pair<int, int> p = maxh.top().second;
        cout<< p.first << " "<< p.second << '\n';
        maxh.pop();
    }
}