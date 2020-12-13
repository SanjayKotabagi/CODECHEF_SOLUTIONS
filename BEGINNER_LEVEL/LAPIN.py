t = int(input())
lst = []
l = 0
flag = 1
for s in range(t):
    lst.append(input())
for s in lst:
    l = len(s) // 2
    flag = 1
    for case in range(len(s)):
        if (s[0:l].count(s[case]) != s[l : len(s)].count(s[case])):
            print("NO")
            break
    else:
        print("YES")