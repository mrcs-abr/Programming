def main():
    while True:
        try:
            x, y = map(int, input().split())
        except:
            break

        if x == 0 or y == 0:
            break

        print(get_quadrant(x, y))
        
def get_quadrant(n1, n2):
    if n1 > 0 and n2 > 0:
        return "primeiro"
    if (n1 < 0 and n2 > 0):
        return "segundo"
    if n1 < 0 and n2 < 0:
        return "terceiro" 
    if n1 > 0 and n2 < 0:
        return "quarto"

main()