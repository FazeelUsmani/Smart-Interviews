def selection(arr,n):
  out = []
  for i in range(n-1,-1,-1):
    max = i
    for j in range(0,i):
        if arr[j] == arr[n-1]:
            max = j       
      
        elif arr[j] & 1:
            if arr[j] >= arr[max]:
                max = j
        
        else:
            if arr[j] > arr[max]:
                max = j
                    
    
    out.append(max)    
    arr[i], arr[max] = arr[max], arr[i]   
  
  return out[:n-1]

t = int(input())
for i in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    arr = selection(arr,n)
    for x in arr:
        print(x, end = " ")
    print()
