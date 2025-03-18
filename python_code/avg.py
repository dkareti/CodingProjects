def main():
    classes = ["Math", "Science", "English", "CS"]



    dictionary = {"Math" : 0, "Science" : 1, "English" : 2, "CS": 3}
    #grades

    Bob = [50, 67, 85, 95]
    Jeff = [77, 88, 92, 96]
    Tom = [91, 90, 95, 99]
    Mine = [92, 96, 91, 94]

    all_list = [Bob, Jeff, Tom, Mine]
    choice = str(input("Enter the subject which you want the average for:(Math, Science, English, Choir. \n"
    "Capitalization MUST match!!!! \n "))

    if choice not in dictionary:
        print("Attempt to calculate avg FAILED!")
    else:
        selected = dictionary[choice]
        targets = [i[selected] for i in all_list]
        ans = avgFunc(targets)

        print('The avg for the class {} is {}'.format(choice, ans))
    

    

def avgFunc(array):
    size = len(array)

    sum = 0
    for index in range(size):
        sum += array[index]

    return sum / size

if __name__ == "__main__":
    main()
              
