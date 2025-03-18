#############

#This file mimics a password interface
#Author: Daniel Kareti
#Modified on: 3/18/25

############

    

def getPass(array):
	phrase = str(input("Enter the Login Credential: "))
	array.append(phrase)
	return array

def accessLogic(numTries, maxTries):
	if numTries < maxTries:
		diff = maxTries - numTries
		print("You have {} more tries remainining".format(diff))
		return '1'
	elif numTries == maxTries:
		print("Access Denied!")
		return '0'

	

def main():
	#create an empty array
	array1 = []

	attempts = 1

	result = getPass(array1)
	while result[-1] != "Daniel":
		print("The access to the underlying system is denied")
		choice = str(input("\nType 'help' for a Hint!\n Enter Here: \n"))
		if choice == "help" or choice == "HELP" or choice == "Help":
			print("Hint : The credential is the Bible character that survives the Lions Den (The first "
			"character is capitalized, the rest are not.)")

		end_flag = accessLogic(attempts, 10)

		if end_flag == '0' :
			print("You've successfully authenticated")
			break
		else:
			print("Try again.")
		result = getPass(array1)
		attempts += 1
		


if __name__ == '__main__':
	main()	