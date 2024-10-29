def binary_search(arr, target):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2

        # Check array = target x
        if arr[mid] == target:
            return mid
        # Jika target x > elemen array, geser ke kanan 
        elif arr[mid] < target:
            low = mid + 1
        # Jika target x < elemen aray, geser ke kiri
        else:
            high = mid - 1

    # not found
    return -1


# Example 
arr = [1, 3, 5, 7, 9, 11, 13, 15]
target = 7

result = binary_search(arr, target)

if result != -1:
    print(f"Element found at index {result}")
else:
    print("Element not found")
