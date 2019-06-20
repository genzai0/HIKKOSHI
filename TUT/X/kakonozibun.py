
n = int(input())

def trib(n):
    a,b,c = 0,0,1

    if n==0 or n==1 or n==2:
        return 0
    else:
        for i in range(n-3):
            a,b,c = b,c,(a+b+c)%10007
            print(c)
        
        return c

print(trib(n))
