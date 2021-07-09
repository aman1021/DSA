#include<iostream>
#include<queue>
using namespace std;
int main(){
    int a[] = {7,10,4,3,20,15};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    cin>>k;
    priority_queue<int> maxh;

    for(int i = 0; i<n; i++){
        maxh.push(a[i]);

        if(maxh.size() > k){
            maxh.pop();
        }
    }

    cout<< maxh.top() << '\n';
}