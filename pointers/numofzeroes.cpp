#include<iostream>
using namespace std;
//count number of zeroes in a number.
int zeroes(int n){
    if(n<9){
        return 0;
    }

    int ans = zeroes(n/10);
    if(n%10==0){
        return ans+1;
    }
    else{
        return ans;
    }
}

int main(){
    int n;
    cin>>n;

    cout<< zeroes(n) <<endl;
}




/*int zeroes(int num, int i){
    string str = to_string(num);
    if(str.at(i) == '\0'){
        return 0;
    }

    int ans = zeroes(num,i+1);

    if(str.at(i) == '0'){
        return ans+1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    cin>>n;
    int i=0;
    
    cout<< zeroes(n,i) <<endl;

}*/
