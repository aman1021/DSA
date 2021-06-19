#include<iostream>
using namespace std;

int allindexes(int a[],int size, int s, int output[]){
    if(size==0){
        return 0;
    }

    int ans = allindexes(a,size-1,s,output);
    if(a[size-1]==s){
        output[ans]=size-1;
        return ans+1;
    }
    else{
        return ans;
    }  //watch the hint2 in lecture 3 of coding ninjas.

}
 int main(){
     int n;
     cin>>n;
      int* a = new int[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }

      int x;
      cin>>x;

      int* output = new int[n];

      int size = allindexes(a,n,x,output);
      for(int i = 0;i<size;i++){
          cout<<output[i]<<" ";
      }
      cout<<endl;

      delete [] a;
 }