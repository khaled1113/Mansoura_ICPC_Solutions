l1 ,r1,l2,r2 =map (int,input().split())
if l2>r1 or l1>r2:
    print(-1)
else:
    print(max(l1,l2),min(r1,r2))