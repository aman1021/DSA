#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int* a = new int[n];
    for(int i =0; i<n ; i++){
        cin>>a[i];
    }

    int d;
    cin>>d;

    int p = 0;

    while(p<d){
        int temp = a[0];
        for(int i = 0;i<n; i++){
            a[i] = a[i+1];
        }
        a[n-1] = temp;
        p++;
    }
    
    for(int i = 0; i<n; i++){
        cout<< a[i] << " ";
    }
     cout << endl;
    delete [] a;

}