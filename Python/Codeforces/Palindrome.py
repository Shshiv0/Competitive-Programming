n = int(input())

words = []
 
for i in range(n):
    w = input().strip()
    words.append(w)
 
for i in range(words):
    
    r = ""

    for i in words:
        if i < len(i):
            r += i[i]
    
    if r==r[::-1]:
        print("YES")
    
    else:
        print("NO")