T = int(input())

for i in range(T):
    N = int(input())
    S = list(map(int, input().split()))
    
    if N%2==0:
        if min(S) == max(S):
            print(-1)
        else:
            S.sort()
            
            L = []
            
            for a, b in zip(S[:N//2], S[N//2:]):
                L.append(a)
                L.append(b)
            print(*L)
    else:
        print(*sorted(S))