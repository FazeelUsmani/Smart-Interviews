def solve(arr,n,k):
    
    low = 0
    high = n-1
    while low <= high:
        
        if arr[low] + arr[high] == k:
            if low != high:
                return True
        elif arr[low] + arr[high] < k:
            low += 1
        else:
            high -= 1
        
    return False


for _ in range(int(input())):
    n, k = [int(i) for i in input().split()]
    arr = [int(x) for x in input().split()]
    arr.sort()
    if solve(arr,n,k):
        print("True")
    else:
        print("False")
