#include <stdio.h>

int binary_search(int arr[], int n, int x) {
    int i = 0;  
    int j = n; 
    
    while (i < j) {
        int m = (i + j) / 2; 
        
        if (x > arr[m]) {
            i = m + 1;  
        } else {
            j = m;  
        }
    }
    

    if (i < n && arr[i] == x) {
        return i + 1;  
    } else {
        return 0;
    }
}

int main() {
  
    int arr[] = {1, 3, 5, 7, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 7; 
    
   
    int location = binary_search(arr, n, x);
    
    if (location != 0) {
        printf("Element %d is found at position: %d\n", x, location);
    } else {
        printf("Element %d is not found in the array.\n", x);
    }
    
    return 0;
}
