
for _ in range(int(input())):
  n = int(input())
  arr = [int(x) for x in input().split()[:n]]    
  temp  = []
  for i in range(1, n):
    key = arr[i]
    j = i-1
    while j >= 0 and key < arr[j]:
      arr[j+1] = arr[j]
      j -= 1

    arr[j+1]= key
    temp.append(j+1)

  for j in temp:
    print(j, end = " ")
  print()

