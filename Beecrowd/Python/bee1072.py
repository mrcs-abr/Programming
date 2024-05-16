n = int(input())
countIn = 0
countOut = 0

for _ in range(n):
    number = int(input())
    if number >= 10 and number <= 20:
        countIn += 1
    else: 
        countOut += 1

print(f"{countIn} in\n{countOut} out")