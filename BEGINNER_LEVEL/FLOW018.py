# cook your dish here
t=int(input("enter:"))
lst=[]
for i in range(t):
    num=int(input())
    lst.append(num)
for numm in lst:
    s=1
    for i in range(1,numm+1):
        s=s*i
    print(s)