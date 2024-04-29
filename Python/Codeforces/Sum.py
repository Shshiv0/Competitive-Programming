k = int(input())
a = 1
b = 1
sum = 0

for i in range(1, k+1):
    sum += a
    a, b = b, a+b

print(sum)