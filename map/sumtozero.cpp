#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int a[] = {2,1,-2,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    unordered_map<int, int> map;
    for(int i =0; i< n; i++){
        map[a[i]]++;
    }
    int sum = 0;
    int count = 0;
    for(int i = 0; i<n ;i++){
        count += map[sum - a[i]];

        if (sum - a[i] == a[i]){
            count--;
        }
    }

    cout << count/2 << endl;
}



//method 1
/*#include<iostream>
using namespace std;
int main(){
    int a[] = {2,1,-2,2,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    int count = 0;

    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(a[i] + a[j] == 0){
                count++;
            }
        }
    }

    cout << count << endl;
}*/