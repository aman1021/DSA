#include<iostream>
using namespace std;   // sum of all elements of an array using recursion.

int sum(int a[], int size){
    if(size==0){
        return 0;
    }
    
    int ans = a[0] + sum(a+1,size-1);
    return ans;

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int output = sum(a,n);
    cout<< output <<endl;
}