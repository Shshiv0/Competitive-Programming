t = int(input())

for i in range(t):
    x = 0
    n = int(input())
    l = [int(i) for i in input().split()]
    
    for k in range(n):
        l[k] = l[k]-1
    
    for j in range(n):
        a = l[l[j]]
        b = l[a]

        if b == l[j]:
            x = 1

    if x == 1:
        print(2)
    else:
        print(3)