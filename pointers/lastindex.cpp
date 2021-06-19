#include<iostream>
using namespace std;

int last_index(int a[], int size, int s){
    if(size == 0){
        return -1;
    }

    int ans = last_index(a+1, size-1, s);
    if(ans!=-1){
        return ans+1;
    }else{
        if(a[0]==s){
            return 0;
        }else{
            return -1;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x;
    cin>>x;

    int output = last_index(a,n,x);
    cout<< output <<endl;
}