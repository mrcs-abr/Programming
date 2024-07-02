n = int(input())

for i in range(1, (n * 4) + 1):
    if (i % 4 == 0):
        i = "PUM"
        print(f"{i}")
    else:
        print(i, end=" ") 

    
    