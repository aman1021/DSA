#include<iostream>
#include<queue>
using namespace std;
int kthsmallest(int a[], int k, int n){
    
    priority_queue<int> maxh;
    for(int i = 0; i<n ; i++){
        maxh.push(a[i]);
        if(maxh.size()  >k){
            maxh.pop();
        }
    }
    return maxh.top();
}

int main(){
    int a[] = {1,3,12,5,15,11};
    int n = sizeof(a)/sizeof(a[0]);
    int k1;
    cin>>k1;
    int k2;
    cin>>k2;
    int first = kthsmallest(a, k1, n);
    int second = kthsmallest(a, k2, n);
    int sum = 0;
    for(int i=0; i<n; i++){
        if(a[i] > first && a[i] < second){
            sum = sum + a[i];
        }
    }
    
    cout << sum << '\n';
}