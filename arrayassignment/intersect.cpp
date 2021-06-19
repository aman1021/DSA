#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int n,m,p=0,q=0;
    cin>>n;
    cin>>m;

    
    int *a1 = new int[n];
    for(int i = 0;i<n; i++){
        cin>>a1[i];
    }
    sort(a1,a1+n);
    
    int *a2 = new int[m];

    for(int i =0; i<m; i++){
        cin>>a2[i];
    }
    sort(a2,a2+m);
   
    while(p<n && q<m){

        if(a1[p] < a2[q]){
            p++;
        }
        else if(a2[q]<a1[p]){
            q++;
        }
        else if(a1[p] == a2[q]){
            cout<< a1[p]<<endl;
            p++;
            q++;
        }
    }
    return 0;
    delete [] a1;
    delete [] a2;
}