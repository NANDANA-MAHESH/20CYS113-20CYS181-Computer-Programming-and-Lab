print("Enter the number of elements")
n = int(input())
integers = [0] * (n)

for index in range(0, n - 1 + 1, 1):
    print("Enter the value for element " + str(index) + " ")
    integers[index] = int(input())
larger = integers[0]
for index in range(1, n - 1 + 1, 1):
    temp = integers[index]
    if temp > larger:
        c = larger
        larger = temp
        temp = c
print("The largest number is " + str(larger) + "")
