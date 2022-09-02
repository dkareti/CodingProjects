#created on: 9/2/22
#Daniel Kareti

print("\nThis Program performs four operations on two numbers obtained by the user.\n")
def mult(x, y):
    return x*y

def divide(x, y):
    if( x % y == 0):
        return x / y
    else:
        print("Division is not possible.")
        return 0

def add(x, y):
    return x+y

def difference(x, y):
    if(x > y):
        return (x-y)
    else:
        return -1*(x-y)

first_number = int(input("Enter a number: "))
second_number = int(input("Enter another number: "))

print("\nThe multiplication is: " + str(mult(first_number, second_number)))
print("The division is: " + str(divide(first_number, second_number)))
print("The sum is: " + str(add(first_number, second_number)))
print("The difference is: " + str(difference(first_number, second_number)))



