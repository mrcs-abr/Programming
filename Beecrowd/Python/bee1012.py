a, b, c = input().split()

a, b, c = float(a), float(b), float(c)

pi = 3.14159

recTriangle = (a*c)/2
circle = pi*(c**2)
trapezium = ((a+b)*c)/2
square = b**2
rectangle = a*b

print(f"TRIANGULO: {recTriangle:.3f}")
print(f"CIRCULO: {circle:.3f}")
print(f"TRAPEZIO: {trapezium:.3f}")
print(f"QUADRADO: {square:.3f}")
print(f"RETANGULO: {rectangle:.3f}")