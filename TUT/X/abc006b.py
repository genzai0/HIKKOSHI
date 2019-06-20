def trib(n):
    if n == 0 or n == 1 or n == 2:
        return 0
    elif n == 3:
        return 1
    else:
        return trib(n-1)+trib(n-2)+trib(n-3)


n = int(input())

if n==1 or n==2:
    print(0)
    exit()
if n==3:
    print(1)
    exit()

l = [0]*(10**6)
l[2] = 1

for i in range(3,n):
    l[i] = (l[i-1]+l[i-2]+l[i-3])%10007
#print(l[i])
else:
    print(l[i])
#res = 0
#for i in range(n-1):
 #   res += sum(l[0:i])
    #print(res)
#else:
 #   print(res%10007)



#print(trib(n-1))
