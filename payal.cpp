#include<bits/stdc++.h>
using namespace std;
int quicksort(int *arr, int l, int r )
{
    if(l<r)
    {
        int k = arr[r], i=(l-1);
        for(int j=l;j<=(r-1);j++)
        {
            if(arr[j]<k)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[r]);
        k=i+1;
        quicksort(arr,l,k-1);
        quicksort(arr,k+1,r);
    }
}
int main()
{
    int n,k,index;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter Array:";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Elements after sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}