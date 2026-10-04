#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int result = linearSearch(arr, target, n);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
