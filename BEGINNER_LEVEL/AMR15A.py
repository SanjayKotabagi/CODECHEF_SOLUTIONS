n=int(input())
l=[]
ec=0
oc=0
l=[int(x) for x in input().split()] 
# =============================================================================
# for i in range(n):
#     l.append(int(input()))
# =============================================================================
for num in l:
    if num%2==0:
        ec+=1
    else:
        oc+=1
if ec>oc:
    print("READY FOR BATTLE")
else:
    print("NOT READY")