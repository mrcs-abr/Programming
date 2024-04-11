p1Code, p1Unit, p1Price = input().split()
p2Code, p2Unit, p2Price = input().split()

p1Code, p1Unit, p1Price = int(p1Code), int(p1Unit), float(p1Price)

p2Code, p2Unit, p2Price = int(p2Code), int(p2Unit), float(p2Price)

total = p1Unit * p1Price + p2Unit * p2Price

print(f"VALOR A PAGAR: R$ {total:.2f}")