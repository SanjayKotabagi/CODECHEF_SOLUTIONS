lst=[]
n=int(input())
for i in range(n):
    lst.append(int(input()))
for i in range(n):
    if lst[i]>=10:
        print("-1")
    else:
        print("What an obedient servant you are!")
