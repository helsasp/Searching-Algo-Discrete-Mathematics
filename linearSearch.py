def linear_search(arr, target):
    for index, value in enumerate(arr): # cari diarray ke kanan terus 
        # check value sesuai
        if value == target:
            return index
    # not found
    return -1


# Example
arr = [4, 2, 5, 7, 1, 3, 9]
target = 5

result = linear_search(arr, target)

if result != -1:
    print(f"Element found at index {result}")
else:
    print("Element not found")
