n, r = [int(x) for x in input().split()] 
ans = [0]*n
run = False

if n%2==0:
    if r%2==0:
        for i in range(r, n, 2):
            ans[i] = 1
        run = True
elif n%2==1:
    if r%2==1:
        for i in range(r+1, n, 2):
            ans[i] = 1
        run = True
    
if run:
    print(" ".join([str(x) for x in ans]))
else:
    print("-1")