N = int(input())

nums = list(map(int, input().split(" ")))

nums.remove(nums[N-1])
nums.remove(nums[0])

sum = []
ans = 0
player = True
while(len(nums) != 0):
    if player == True:
        if nums[0] < nums[len(nums)-1]:
            sum.append(nums[len(nums)-1])
            del nums[len(nums)-1]
        else:
            sum.append(nums[0])
            del nums[0]
        player = False
    else:
        if nums[0] < nums[len(nums)-1]:
            del nums[len(nums)-1]
        else:
            del nums[0]
        player = True

for i in sum:
    ans += i

print(int(ans))