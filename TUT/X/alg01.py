"""n,x = map(int,input().split())
l = list(map(int,input().split()))

print(l.index(x))
"""
"""
sum = 0
for i in range(10**8):
    sum += 1

print(sum)
"""
"""
a = [1,2,3,4,5,30,100,210]
def binary_search(x):
    n = len(a)
    left = 0
    right = n
    while(right - left > 1):
        ave = (left + right) // 2
        if a[ave] > x:
            right = ave
        else:
            left = ave

    return left

print(binary_search(4))
"""
#l = list(map(int,input().split()))
#target = int(input())

def a(n):
    if n==1:
        return 5
    else:
        return a(n-1)+4

#print(a(1))
#print(a(2))

def fib(a):
    if a==1 or a==2:
        return 1
    else:
        return fib(a-1)+fib(a-2)

print(fib(10))
