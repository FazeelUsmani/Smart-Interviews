def sum(arr, i, j, n):
  sum = 0
  for k in range(n):
    sum += arr[i][j]
    i += 1
    j += 1

  return sum

for _ in range(int(input())):
  n = int(input())  
  arr = []
  for i in range(n):
    l = [int(x) for x in input().split()]
    arr.append(l)
    
  j = n-1
  for t in range(1,n+1):
    print(sum(arr,0,j,t), end = " ")
    j -= 1

  i = 1
  for t in range(n-1,0,-1):
    print(sum(arr,i,0,t), end = " ")
    i += 1

  print()
