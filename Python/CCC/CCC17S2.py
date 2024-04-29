import math

n = int(input())

t = list(map(int, input().split()))
t.sort()

lt = t[:math.ceil(n/2)]
ht = t[math.ceil(n/2):]

d = []

for i in range(int(n/2)):
    d.append(lt[math.ceil(n/2-i-1)])
    d.append(ht[i])

if n%2==1:
    d.append(lt[0])

print(*d)