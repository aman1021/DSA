#include<iostream>
#include<cstdlib>
#include<queue>
using namespace std;
int main(){
    int a[] = {5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    cin>>k;
    int x;
    cin>>x;
    priority_queue<pair<int, int>> maxh;
    for(int i=0; i<n; i++){
        maxh.push({abs(a[i]-x), a[i]});
        if(maxh.size() > k){
            maxh.pop();
        }
    }
    while(maxh.size() > 0){
        cout << maxh.top().second << " ";
        maxh.pop();
    }
    cout<< '\n';
}