if __name__ == "__main__":
    n,t = map(int,input().split())
    l = [0]*n
    for i in range(n):
        l[i] = int(input())

    res = 0
    for i in range(len(l)-1):
        # print(res)
        if l[i+1]-l[i] < t:
            res += l[i+1]-l[i]
        else:
            res += t
    else:
        res += t
        print(res)




