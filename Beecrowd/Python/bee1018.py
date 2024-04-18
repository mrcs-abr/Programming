number = int(input())

notes = [100, 50, 20, 10, 5, 2, 1]
count = 0

print(number)

for i in range(len(notes)):
    count = number // notes[i]
    number = number % notes[i]
    
    print(f"{count} nota(s) de R$ {notes[i]:.2f}".replace('.', ','))






