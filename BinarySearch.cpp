#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int findElementInInfiniteArray(int arr[], int target) {
    int left = 0, right = 1;
    
    while (arr[right] < target) {
        left = right;
        right *= 2;
    }
    
    return binarySearch(arr, left, right, target);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 20, 25, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 30;
    
    int index = findElementInInfiniteArray(arr, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
