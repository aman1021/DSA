#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int> s;
    vector<int> v;
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i =0; i<n; i++){
        cin>> arr[i];
    }

    for(int i = n-1; i>=0; i--){

        if(s.empty()){
            v.push_back(-1);
        }

        else if(s.size() >0 && s.top() > arr[i]){
            v.push_back(s.top());
        }

        else if(s.size() > 0  && s.top() <= arr[i]){
            while(s.size() > 0 && s.top() <= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }

        s.push(arr[i]);
    }
    int len = v.size();
    for(int i = len-1; i>=0; i--){
        cout << v.at(i) << " ";
    }

    cout << endl;

}