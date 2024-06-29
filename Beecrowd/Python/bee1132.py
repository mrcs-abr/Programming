first = int(input())
second = int(input())
total = 0
count = first

if first > second:
    aux = second
    second = first
    first = aux

for i in range(first, second + 1):
    if not(i % 13 == 0):
        total += i

print(total)