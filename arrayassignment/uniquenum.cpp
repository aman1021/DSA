#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
 // this program is to find the 
 // all the non repeating numbers in the array.
    for(int i=0 ; i<n ; i++){
        bool flag = true;
        for(int j = 0; j<n; j++){
            if(a[i] == a[j] && i!=j){
                flag =  false;
                break;
            }
        }
        if(flag == true){
        cout<< a[i] <<endl;
        }
    }

    
}