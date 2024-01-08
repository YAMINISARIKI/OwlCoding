n = int(input())
a = list(map(int,input().split()))
res = (n*(n+1))/2
x = sum(a)
for i in range(n):
    if(a.count(a[i])==2):
        repeat = a[i]
miss = res+repeat-x
print(repeat,end=" ")
print(int(miss))
