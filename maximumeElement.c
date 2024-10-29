#include <stdio.h>

int find_max(int arr[], int n) {
    int max = arr[0];  
    
    for (int i = 1; i < n; i++) {  
        if (max < arr[i]) {
            max = arr[i];  
        }
    }
    
    return max;
}

int main() {
   
    int arr[] = {3, 9, 1, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
  
    int max_value = find_max(arr, n);
    printf("The maximum value is: %d\n", max_value);
    
    return 0;
}

// Running time = O(n)