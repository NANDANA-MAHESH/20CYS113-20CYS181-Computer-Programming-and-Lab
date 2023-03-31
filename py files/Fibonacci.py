def fibo(n):
    a = 0
    b = 1
    c = 0
    if n > 0:
        print("Fibonacci Series: 0 ", end='', flush=True)
        for i in range(0, n - 2 + 1, 1):
            c = a + b
            a = b
            b = c
            print(str(a) + " ", end='', flush=True)
    else:
        if n == 0:
            print(a)
        else:
            print("Invalid input")

# Main
print("Enter the number of terms in Fibonacci Series")
n = int(input())
fibo(n)
