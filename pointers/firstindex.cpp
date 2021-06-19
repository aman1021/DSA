#include<iostream>
using namespace std;

int first_index(int a[], int size, int s){
    if(size == 0){
        return -1;
    }

    if(a[0] == s){
        return 0;
    }

    int ans = first_index(a+1,size - 1,s);
    if(ans == -1){
        return -1;
    } else{
        return ans + 1;
    }

    //return ans;
}
//first index at which the number is found
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x;
    cin>>x;

    int output = first_index(a,n,x);
    cout<< output <<endl;
}