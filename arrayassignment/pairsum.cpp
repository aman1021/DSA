#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int* a = new int[n];
    for(int i = 0;i<n; i++){
        cin>>a[i];
    }

    int k;
    cin>>k;

    //sorting the array
    sort(a,a+n);

    
    int count =0;

   
   for(int i = 0; i<n; i++){
       for(int j = i+1; j<n; j++){
           if(a[i] + a[j] == k){
               count++;
           }
       }
   }
    cout<< count <<endl;
    delete [] a;

}