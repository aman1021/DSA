#include<iostream>
using namespace std;

int multiplication(int a, int b){
    if(b==0){
        return 0;
    }
   // cout<< a<< endl;
    
    int ans = multiplication(a,b-1);
    
   // ans += a;
    return ans + a;
}

int main(){
    int m,n;
    cin>>m >>n;
    

    cout<< multiplication( m, n)<< endl;
    //cout<<output<<endl;
}