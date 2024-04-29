S = input()
T = input()
K = int(input())

for i in range(len(S)):
    if (S[i] == ' ') != (T[i] == ' '):
        K = 0
        break
    elif S[i] != T[i]:
        K -= 1

if K <= 0:
    print('No plagiarism')
else:
    print('Plagiarized')