tea = int(input())

a, b, c, d, e = map(int, input().split())

count = 0

if a == tea:
    count += 1
if b == tea:
    count += 1
if c == tea:
    count += 1
if d == tea:
    count += 1
if e == tea:
    count += 1

print(count)