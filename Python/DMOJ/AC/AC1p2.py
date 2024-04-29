import math

def racing():
    N, D, K, X = map(int, input().split())
    speed = []

    for i in range(N):
        s = int(input())
        speed.append(s)

    P = int(input())

    count = 0

    for i in range(len(speed)):
        while P <= speed[i]:
            speed[i] = math.floor(speed[i]*((100-X)/100))
            count += 1
        if K < count:
            print("NO")
            return 0
    print("YES")

racing()