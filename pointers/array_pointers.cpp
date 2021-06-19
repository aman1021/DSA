#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<< a<<endl; //treating a as a pointer
    cout<< &a[0] << endl;

    a[0] = 5;
    cout<< *a <<endl;  //dereference a
}