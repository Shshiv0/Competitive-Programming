essay = input()

u = 0
l = 0

for c in essay:
    if c.isalpha() and c.upper() == c:
        u += 1
    elif c.isalpha():
        l += 1

if u > l:
    print(essay.upper())
elif l > u:
    print(essay.lower())
else:
    print(essay)