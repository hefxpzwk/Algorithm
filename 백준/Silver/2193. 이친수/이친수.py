n=int(input())
a=[0,1,1]
for i in range(3,n+1):
  a.append((a[i-1]+a[i-2]))
print(a[n])