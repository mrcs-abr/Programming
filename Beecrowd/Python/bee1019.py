seconds = int(input())

hour = seconds // 3600

minutes = (seconds % 3600) // 60

sec = (seconds % 60)

print(f"{hour}:{minutes}:{sec}")