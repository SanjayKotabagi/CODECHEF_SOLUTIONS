n=int(input())
lst=[]
for i in range(n):
    num=int(input())
    lst.append(num)
for i in range(n):
    sum=0
    while lst[i]!=0:
        r=lst[i]%10
        sum+=r
        lst[i]//=10
    print(sum)