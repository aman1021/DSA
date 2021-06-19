#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int* a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum =0;
    for(int i=0; i<n ;i++){
        sum+=a[i];  //the sum of all elements in an array
    }
    cout<< sum <<endl;

    int sum2 = ((n-2)*(n-1))/2; //the sum of elements from 0 to n-2 using (n x n+1 )/2
    cout << sum2 <<endl;

    int ans =  sum - sum2; // the duplicate element in the array.

    cout << ans <<endl;

    delete [] a;
}