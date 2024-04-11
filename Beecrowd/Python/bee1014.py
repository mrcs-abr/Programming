traveled = int(input())
spentFuel = float(input())

try:
    consumption = traveled/spentFuel
    print(f"{consumption:.3f} km/l")
except ZeroDivisionError:
    print("Error: you must insert a spent fuel value greater than zero")
    


