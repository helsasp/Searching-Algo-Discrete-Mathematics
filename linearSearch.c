#include <stdio.h>

int linear_search(int arr[], int n, int x) {
    int i = 0;  
    
    
    while (i < n && x != arr[i]) {
        i++;
    }

    if (i < n) {
        return i + 1; 
    } else {
        return 0; 
    }
}

int main() {
   
    int arr[] = {3, 9, 1, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);  
    int x = 6; 
    
   
    int location = linear_search(arr, n, x);
    
    if (location != 0) {
        printf("Element %d is found at position: %d\n", x, location);
    } else {
        printf("Element %d is not found in the array.\n", x);
    }
    
    return 0;
}

// running time = O(n)