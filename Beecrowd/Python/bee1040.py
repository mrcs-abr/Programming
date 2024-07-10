def main():
    n1, n2, n3, n4 = map(float, input().split())

    average = ((n1*2) + (n2*3) + (n3*4) + n4) / 10

    print(f"Media: {average:.1f}")

    print(process(average))

def process(avg):
    if avg >= 7.0:
        return "Aluno aprovado."

    if 5.0 <= avg <= 6.9:
        print("Aluno em exame.")
        new_score = float(input())
        print(f"Nota do exame: {new_score}")
        avg = (avg + new_score) / 2

        if avg >= 5.0:
            return f"Aluno aprovado.\nMedia final: {avg}"
        else:
            return f"Aluno reprovado.\nMedia final: {avg}"
        
    if avg < 5.0:
        return "Aluno reprovado."

main()



