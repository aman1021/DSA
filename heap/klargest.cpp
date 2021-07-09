#include<iostream>
#include<queue>
using namespace std;
int main(){
    int a[] = {7,10,4,3,20,15};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    cin>>k;
    priority_queue<int, vector<int>, greater<int>> minh;

    for(int i = 0; i<n; i++){
        minh.push(a[i]);

        if(minh.size() > k){
            minh.pop();
        }
    }
  //printing k largest element in heap
    while(minh.size() > 0){
        cout << minh.top() << " ";
        minh.pop();
    }

    cout << '\n';
}