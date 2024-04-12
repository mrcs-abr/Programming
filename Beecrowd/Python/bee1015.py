x1, y1 = [float(x) for x in input().split()]
x2, y2 = [float(y) for y in input().split()]

distance = ((x2-x1)**2 + (y2-y1)**2)**0.5

print(f"{distance:.4f}")

