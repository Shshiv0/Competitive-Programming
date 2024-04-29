w = int(input())

for i in range(2, w):
    if w%i==0 and (w/i)%2 == 0:
        print("YES")
        exit()

print("NO")