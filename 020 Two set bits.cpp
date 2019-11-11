mod = 1000000007
def twoBit(n):
  flag = True
  arr = []
  i = 3
  c = 0
  while flag:
    if c == n:
      flag = False
    if count(i):
      arr.append(i)
      c += 1

    i += 1
  return arr

def count(n):
  c = 0
  while n:
    n = n& (n-1)
    c += 1
    if c > 2:
        return False
  if c == 2:
    return True
  return False

arr = twoBit(200)
for _ in range(int(input())):
  n = int(input())  
  print(arr[n-1])