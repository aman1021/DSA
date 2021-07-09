#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    
}





//LENGTH OF LONGEST CONSECUTIVE SUBSEQUENCE
/*#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    int a[] = {2, 12,9,16, 10, 5, 3, 20, 25, 11, 1, 8, 6};
    int n = sizeof(a)/sizeof(a[0]);
    unordered_set<int> s;
    for(int i =0; i<n; i++){
        s.insert(a[i]);
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(s.find(a[i]-1) == s.end()){
            int j = a[i];
            while(s.find(j) != s.end()){
                j++;
            }
            ans = max(ans, j-a[i]);
        }
    }
    cout << ans << '\n';
}*/