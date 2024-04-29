count = 0

for _ in range(6):
    number = float(input())
    if number > 0:
        count += 1

print(f"{count} valores positivos")