#include<iostream>
#include<algorithm>
using namespace std;

int secLar(int* arr, int n){
    sort(arr, arr+n);
    if(n<2){
        return -1;
    }
        for(int i = n-2; i>=0; i--){
            if(arr[i] != arr[n-1]){
                return arr[i];
            }
        }
        return -1;
    }

int main(){
    int arr[] = {4,9,34,5,7,23,6,34};
    int n = sizeof(arr)/sizeof(int);
    int x = secLar(arr,n);
    cout<<"Second Largest element :"<<x;
    return 0;
    
}