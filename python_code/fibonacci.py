###
# Modified 3/18/25
# Author: Daniel Kareti

#variables used within the sequence
i = 0
j = i + 1

#variable used to format the output
count = i

print("\nThe first 20 values of the fibonacci sequence:")

store = []

#The fibonacci sequence:
for m in range(20):
    if(count < 9):
        print("Number " + str(count+1) +" in the sequence:  "+ str(i))
    else:
        print("Number " + str(count+1) +" in the sequence: " + str(i))
   
    store.append(i)
    temporary_var = i
    i = j
    j += temporary_var

    count += 1
print("All 20 values in a list: {}".format(store))
    
