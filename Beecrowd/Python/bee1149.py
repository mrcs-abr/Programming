usr_input = map(int, input().split())
valid_values = []
total = 0

for value in usr_input:
    if value > 0:
        valid_values.append(value)

a = valid_values[0]
n = valid_values[1]

for i in range(a, a + n):
    total += i 

print(total)
