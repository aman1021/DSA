#include<iostream>
using namespace std;
int main(){
    int i= 10;
    cout<< &i <<endl;
    int * p = &i;
    cout<< p <<endl;
    
    cout<< *p <<endl;  //dereference operator.....it will print the value of i directly
    cout<< sizeof(p) <<endl;
}