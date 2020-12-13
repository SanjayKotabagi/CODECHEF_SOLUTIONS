lst = []
flag = 0
t = int(input())
for i in range(t):
    lst.append(int(input()))
for num in lst:
    for j in range(2,num-1):
        if num % j == 0:
            flag = 1
            break
        else:
            flag = 0
    if flag == 0:
        print("no")
    else:
        print("yes")
    if num == 1:
        print("no")
