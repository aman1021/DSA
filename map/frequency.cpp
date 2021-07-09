#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
      int a[] = {1,2,2,3,4,2,3,2,2};
      unordered_map<int,int> map;
      int n = sizeof(a)/sizeof(a[0]);
      for(int i = 0; i<n; i++){
            map[a[i]]++;
      }

      int size = map.size();
      int maximum = 0, result = -1;
      for(auto i : map){
        if(maximum < i.second){
              result = i.first;
              maximum = i.second;
        }
      }
      cout << result << endl;
}
