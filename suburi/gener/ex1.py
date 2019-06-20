def count_up():
    x = 0
    while True:
        yield x
        x += 1

def fib():
    a,b = 0,1
    while True:
        yield b
        a,b = b,a+b

for i in fib():#enumerate(fib()):
    print(i)
    if i == 10**9:
        break
