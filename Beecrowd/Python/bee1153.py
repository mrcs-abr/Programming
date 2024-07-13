n = int(input())

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        pos = factorial(n - 1)
        res = n * pos
        return res

print(factorial(n))