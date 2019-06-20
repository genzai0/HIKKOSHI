m = 20
e = 7
n = 589
# print(str(m**7)+"\n")
"""
l = lambda m,count: len(str(m**count))
count = 3
print('{0: >14}'.format(20))

for i in range(6):
    print("x" + '{0: >13}'.format(20))
    print("-"*14)
    print(f"{0:> 14}")
    print(f"{2*m:> 13}")
    print("-"*14)
    m *= 20
    print(f"{m: > 14}")


print("\n\n")
print(f"{m//589: > 14}")
print("   "+"-"*11)
ss = "589)" + str(m)
print(ss)
strin = ""
for i,j  in enumerate(str(m//n)):
    if i==0 or i==2 or i==3 or i==5 or i==6:
        print(" "*(i+4)+str((int(j))*n))
    else:
        print(" "*(i+5)+str((int(j))*n))
    print(" "*4 + "-"*10)
    strin += j
    # print(strin)
    if False: print(" "*(i+3) + str(m-n*(int(strin)*(10**(6-i)))))
    else: print(" "*(i+5) + str(m-n*(int(strin)*(10**(6-i))))[:4])
    """

c = 514
d = 13
for i in range(1,d+1):
    if i<10:
        print(str(c) + "の{}乗  = ".format(i)+ str(c**i))
    else:
        print(str(c) + "の{}乗 = ".format(i)+ str(c**i))


print("\n")
print(str(c**i) +" mod 589 = " +  str((c**i%n)))
