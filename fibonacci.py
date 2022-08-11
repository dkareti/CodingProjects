i = 0
j = 1
count = 0
print("\nThe first 13 values of the fibonacci sequence:")

while( j != 377):
    print("Value number " + str(count+1) +":  "+ str(i))
    temporary_var = i

    i = j
    j += temporary_var
    count += 1
    if count == 13:
        print()
    
