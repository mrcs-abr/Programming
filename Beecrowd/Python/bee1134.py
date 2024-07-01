answer = 1
alcohol = 0
gas = 0
diesel = 0

while answer != "4":
    answer = input()

    match answer:
        case "1":
            alcohol += 1
        case "2":
            gas += 1
        case "3":
            diesel += 1

print(f"MUITO OBRIGADO\nAlcool: {alcohol}\nGasolina: {gas}\nDiesel: {diesel}")
