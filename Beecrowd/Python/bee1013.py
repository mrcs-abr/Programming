a, b, c = map(int,input().split())

if (a > b) and (a > c):
    greater = a
elif (b > c):
    greater = b
else:
    greater = c
    
print(f"{greater} eh o maior")