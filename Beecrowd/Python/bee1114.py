password = 2002

while True:
    answer = int(input())
    if answer == password:
        print("Acesso Permitido")
        break
    else:
        print("Senha Invalida")