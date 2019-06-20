def trib(n):
    a,b,c = 0,0,1
    for i in range(n-3):
        a,b,c = b,c,sum([a,b,c])%10007
    else:
        return c

n = int(input())

if n==1 or n==2:
    print(0)
    exit()
elif n==3:
    print(1)
    exit()
else:
    print(trib(n))
