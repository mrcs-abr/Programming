gremio = 0
inter = 0
tie = 0
grenais = 1

while 1:
    intGoals, greGoals = map(int, input().split())

    if intGoals > greGoals:
        inter += 1
    elif greGoals > intGoals:
        gremio += 1
    else:
        tie += 1

    print("Novo grenal (1-sim 2-nao)")
    continues = input()

    match continues:
        case "1":
            grenais += 1
        case "2":
            break

print(f"{grenais} grenais\nInter:{inter}\nGremio:{gremio}\nEmpates:{tie}")

if inter > gremio:
    print("Inter venceu mais")
elif gremio > inter:
    print("Gremio venceu mais")
else:
    print("Não houve vencedor")

