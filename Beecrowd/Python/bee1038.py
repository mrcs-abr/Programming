code, quantity = map(int, input().split())

products = [None, 4.00, 4.50, 5.00, 2.00, 1.50]

total = products[code] * quantity

print(f"Total: R$ {total:.2f}")