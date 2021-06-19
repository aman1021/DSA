#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int* a= new int[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){    //this program is only when the array have only one non repeating number.
        ans = ans ^ a[i];
    }
    cout << ans << endl;

    delete [] a;
}

