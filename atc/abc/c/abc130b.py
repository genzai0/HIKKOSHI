n,x = map(int,input().split())
l = list(map(int,input().split()))

s = 0
for i,leng in enumerate(l):
    s += leng
    if x<s:
        print(i+1)
        break
else:
    print(n+1)
