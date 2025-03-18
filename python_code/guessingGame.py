#Author: Daniel Kareti
#Modified on : 3/18/25

import random

New = ["apple", "pear", "banana", "racecar", "orange", "dog", "hat"]

choice = random.choice(New)

letters = list(choice)

print(len(letters)*["_"])

copy = len(letters)*["_"]

count = len(letters)

for h in range(1, count+1, 1):

    print("The word is one from the list {}".format(New))

    n = str(input("Guess a letter: "))
    while n in letters:

        #finding the index of the guess

        e = letters.index(n)

        #setting the index of copy
        copy[e] = n
        #making sure that this letter is not checked again in the loop
        letters[e] = "_"
    print(copy)
    if "_" not in copy:
        #checking if all the blanks in copy are gone
        break
