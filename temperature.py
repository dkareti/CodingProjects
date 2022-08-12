#reading input from user in python

temp = input("Enter a temperature in degrees Fahrenheit: ")

temp_celsius = ((32 * int(temp)) - 32) * float(5/9)

temp_kelvin = temp_celsius + 273.15

print("Your temperature of " + str(temp) + "converted into Celsius and Kelvin is the following:\n")
print("     Celsius: " + str(temp_celsius))
print("     Kelvin: " + str(temp_kelvin)) 
