lst = ["BattleShip","Cruiser","Destroyer","Frigate"]
t = int(input())
case = []
flag = 0
pr = ""
for i in range(t):
    c = input()
    c = c.upper()
    case.append(c)

for c in case:
    for name in lst:
        if name[0]==c:
            print(name)