#reading input from user in python

temp = input("Enter a temperature in degrees Fahrenheit: ")

temp_celsius = (int(temp) - 32) * float(5/9)

temp_kelvin = temp_celsius + 273.15

#round values to two decimal places
temp_celsius = round(temp_celsius, 2)
temp_kelvin = round(temp_kelvin, 2)

print("Your given temperature is " + temp + ". This converted into Celsius and Kelvin is the following:\n")
print("     Celsius: " + str(temp_celsius))
print("     Kelvin: " + str(temp_kelvin)) 
