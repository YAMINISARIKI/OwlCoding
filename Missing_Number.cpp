n = int(input())
a = list(map(int,input().split()))
res = (n*(n+1))/2
ans = sum(a)
print(int(res-ans))
