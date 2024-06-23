scoreSum = 0
count = 0

while True:
    score = float(input())
    
    if  0 <= score <= 10:
        scoreSum += score
        count+=1
    else:
        print("nota invalida")
    
    if count == 2:
        print(f"media = {(scoreSum / 2):.2f}")
        break
