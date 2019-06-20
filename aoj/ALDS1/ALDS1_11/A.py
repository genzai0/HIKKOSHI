n = int(input())
l = []
pad = 0
for i in range(n):
    s = list(map(int,input().split()))
    pad = max(pad,s[1])
    l.append(s)

l.sort()

for i in l:
    print()
print(l)

