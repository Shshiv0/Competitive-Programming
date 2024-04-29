min = int(input())
max = int(input())

count=0
for i in range(min, max+1):
    t = str(i)
    skip = False
    rotated = ""
  
    for j in range(len(str(i))):
        if t[j] == "6":
            rotated += "9"
        elif t[j] == "9":
            rotated += "6"
        elif t[j] == "8":
            rotated += "8"
        elif t[j] == "1":
            rotated += "1"
        elif t[j] == "0":
            rotated += "0"
        else:
            skip = True
            break
  
    if t == rotated[::-1] and skip == False:
        count += 1
    
print(count)