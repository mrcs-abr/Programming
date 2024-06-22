cases = int(input())

for _ in range(cases):
    x, y = map(int, input().split())
    try:
        res = x / y
    except ZeroDivisionError:
        print("divisao impossivel")
    else:
        print(f"{res:.1f}")