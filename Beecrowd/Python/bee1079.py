n = int(input())

mediaList = []

for _ in range(n):
    number1, number2, number3 = map(float, input().split())
    media = ((number1 * 2) + (number2 * 3) + (number3 * 5)) / 10
    mediaList.append(media)

for i in range(len(mediaList)):
    print(f"{mediaList[i]:.1f}")



