age = int(input())

year = age // 365

month = (age % 365) // 30

day = (age % 365) % 30

print(f"{year} ano(s)\n{month} mes(es)\n{day} dia(s)")