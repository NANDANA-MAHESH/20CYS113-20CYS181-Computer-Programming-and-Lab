def fact(n):
    f = 1
    if n > 0:
        for i in range(1, n + 1, 1):
            f = f * i
        print("Factorial of number " + str(n) + " is " + str(f))
    else:
        if n == 0:
            print("Factorial of number " + str(n) + " is " + str(f))
        else:
            print("Factorial of negative numbers is invalid")

# Main
print("Enter the number whose factorial is to be calculated")
n = int(input())
fact(n)
