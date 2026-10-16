#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    // Base case: element nahi mila
    if (low > high) {
        return -1;
    }

    // Middle index
    int mid = low + (high - low) / 2;

    // Element mil gaya
    if (arr[mid] == target) {
        return mid;
    }

    // Target right side mein hai
    if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, high, target);
    }

    // Target left side mein hai
    return binarySearch(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {10, 20, 30, 00, 50};
    int n = 5;
    int target = 40;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at index " << result;
    }

    return 0;
}