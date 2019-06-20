def sbox():
    l = []
    for i in range(4):
        a = map(int,input().split())
        for j in a:
            l.append(j)
    else:
        return l

def P():
    l = []
    for i in range(8):
        a = map(int,input().split())
        for j in a:
            l.append(j)
    else:
        return l

def XOR():
    s = ""
    a = input()
    b = input()
    for i in range(len(a)):
        if a[i] != b[i]:
            s += "1"
        else:
            s += "0"
    else:
        return s

def Transposition(mode, inputNumber):
    resNumber =""
    for i in table[mode]:
        resNumber += inputNumber[i-1]
    else:
        return resNumber

#def 
print(P())
