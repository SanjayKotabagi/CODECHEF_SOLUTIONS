# cook your dish here
t=int(input())
lst=[]
for i in range(t):
    val=int(input())
    lst.append(val)
for num in lst:
    lst1=[]
    nnum=0
    while num>0:
        rem=num%10
        num=num//10
        nnum=nnum*10+rem
    print(nnum)
    