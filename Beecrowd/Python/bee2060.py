input()

bino_list = map(int, input().split())

mlist = [0, 0, 0, 0]

for n in bino_list:
    if (n % 2 == 0):
        mlist[0] += 1
    if (n % 3 == 0):
        mlist[1] += 1
    if (n % 4 == 0):
        mlist[2] += 1
    if (n % 5 == 0):
        mlist[3] += 1

for i in range(2, 6):
    print(f"{mlist[i - 2]} Multiplo(s) de {i}")


