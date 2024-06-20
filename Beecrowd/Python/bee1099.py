cases = int(input())

sumList = []

for _ in range(cases):
    x, y = map(int, input().split())

    if x > y:
        aux = y
        y = x
        x = aux

    oddSum = 0

    if not (x % 2 == 0):
        x += 1

    for i in range(x, y):
        if not (i % 2 == 0):
            oddSum += i
    
    sumList.append(oddSum)

for i in range(cases):
    print(sumList[i])
    

    



        

        




    

            
    
    


        
    
    




