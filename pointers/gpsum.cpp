#include<bits/stdc++.h>

using namespace std;

double gsum(int s){
    if(s==0){
        return 1;
    }

    double ans = gsum(s-1);
    double a = ans + 1/(double)pow(2,s);
    return a;
}

int main(){
    int k;
    cin>>k;

    cout<<gsum(k)<<endl;
}