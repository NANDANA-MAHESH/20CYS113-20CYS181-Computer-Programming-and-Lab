print("Enter number of students")
n = int(input())
name = [""] * (n)
mark1 = [0] * (n)
mark2 = [0] * (n)
mark3 = [0] * (n)
rollno = [0] * (n)
total = [0] * (n)
average = [0] * (n)

for i in range(0, n - 1 + 1, 1):
    print("Enter the name of student" + str(i + 1))
    name[i] = input()
    print("Enter roll number of student" + str(i + 1))
    rollno[i] = int(input())
    print("Enter mark1")
    mark1[i] = int(input())
    print("Enter mark2")
    mark2[i] = int(input())
    print("Enter mark3")
    mark3[i] = int(input())
    total[i] = mark1[i] + mark2[i] + mark3[i]
    print("Total marks are  " + str(total[i]))
    average[i] = float(total[i]) / 3
    print("Average marks is  " + str(average[i]))
