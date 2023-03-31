print("Enter number to be divided")

# Get dividend
dividend = int(input())
print("Enter the divisor")

# Get divisor
divisor = int(input())
quotient = float(dividend) // divisor

# Quotient will be calculated
remainder = dividend - divisor * quotient
print("The remainder is " + str(remainder))

# Remainder will be displayed
