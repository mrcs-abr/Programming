even = 0
odd = 0
positive = 0
negative = 0

for _ in range(5):    
    number = int(input())
    
    if number % 2 == 0:
        even += 1
    else:
        odd += 1

    if number > 0:
        positive += 1
    elif number < 0:
        negative += 1

print(f"{even} valor(es) par(es)\n{odd} valor(es) impar(es)")
print(f"{positive} valor(es) positivo(s)\n{negative} valor(es) negativo(s)")
