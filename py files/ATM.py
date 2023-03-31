print("Enter your name")
name = input()
print("Enter your account no")
accNo = int(input())
print("Enter your account balance")
balance = float(input())
print("Enter choice")
print("1.Withdrawal")
print("2.Deposit")
print("3.Check Balance")
print("4.Pin Change")
i = int(input())
if i == 1:
    if balance > 500:
        print("Enter your pin")
        pin = int(input())
        print("Enter amount to be withdrawn")
        amount = float(input())
        balance = balance - amount
        if balance > 100:
            print("Your current balance is " + str(balance))
        else:
            print("Amount can't be withdrawn")
    else:
        print("Enter amount to be withdrawn")
        amount = float(input())
        balance = balance - amount
        if balance > 100:
            print("Your current balance is " + str(balance))
        else:
            print("Amount can't be withdrawn")
else:
    if i == 2:
        print("Enter Amount to be deposited")
        amount = float(input())
        balance = balance + amount
        print("Your current balance is " + str(balance))
    else:
        if i == 3:
            print("The current balance is " + str(balance))
        else:
            if i == 4:
                print("Enter current pin ")
                pin1 = int(input())
                print("Enter the pin you want to change to")
                pin2 = int(input())
                pin1 = pin2
                print("Your new pin is " + str(pin1))
            else:
                print("Choice is not available")
print("THANKS FOR USING OUR ATM")
