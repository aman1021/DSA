#include<iostream>
using namespace std;

bool find(int a[], int size, int s){
    if(size == 0){
        return false;
    }

    if(a[0] == s){
        return true;
    }/*else{
        return false;
    }*/

    bool findSmaller = find(a+1, size -1, s);
    cout<< a[0] <<endl;
    return findSmaller;   
}
// find the number using recursion

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x; // number which is to be find
    cin>>x;

    int output = find(a,n,x);
    cout<< output <<endl;

}