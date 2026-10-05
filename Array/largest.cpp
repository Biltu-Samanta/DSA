#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2,3,5,36,9,6};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n);
    int last = arr[n-1];
    cout<<"The Largest element :"<<last;
    return 0;
}