test_case = int(input())
res = []
num = []
fnum = ''
withdraw_amount = []
for i in range(test_case):
    n,bal = input().split(' ')
    n = int(n)
    bal = int(bal)
    withdraw_amount = list(map(int,input().split()))
    for k in withdraw_amount:
        avlbl = bal - k
        if avlbl < 0:
            num.append('0')
        else:
            num.append('1')
            bal -= k
    for l in num:
        fnum += l
    res.append(fnum)
    fnum = ''
    num.clear()
for i in res:
    print(i)



