#include<iostream>
#include<queue>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    priority_queue<int, vector<int>, greater<int>> minh;
    int totalcost = 0;
    for(int i = 0; i<n; i++){
        minh.push(a[i]);
    }
    while(minh.size() >= 2){
        int first = minh.top();
        minh.pop();
        int second = minh.top();
        minh.pop();
        totalcost = totalcost + first + second;
        minh.push(first + second);
    }

    cout << totalcost << '\n';
}