# cook your dish here
t = int(input())
a1 = []
a2 = []
for i in range(t):
    count = int(input())
    for j in range(count):
        a1.append(int(input()))
        a1 = sorted(a1)
    sum = a1[0] + a1[1]
    a1 = []
    a2.append(sum)
for i in range(len(a2)):
    print(a2[i])