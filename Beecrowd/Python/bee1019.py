number = int(input())

hours = number // 3600

minutes = (number % 3600) // 60

seconds = number % 60

print(f"{hours}:{minutes}:{seconds}")