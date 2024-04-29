n = int(input())

words = []
 
for i in range(n):
    w = input().strip()
    words.append(w)
 
for i in range(len(words)):
    
    r = ""

    for w in words:
        if i < len(w):
            r += w[i]
    
    if r==r[::-1]:
        print("YES")
    else:
        print("NO")