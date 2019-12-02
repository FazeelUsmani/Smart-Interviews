def solve(arr,n,k):
    for i in range(n):
        for j in range(n):
            if i != j:
                sum = arr[i] + arr[j]
                if sum == k:
                    return True
                
    return False
                    
                    
for _ in range(int(input())):
    n, k = [int(i) for i in input().split()]
    arr = [int(x) for x in input().split()]
    if solve(arr,n,k):
        print("True")
    else:
        print("False")
