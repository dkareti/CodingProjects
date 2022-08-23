
#decreasing pattern
j = 5;
count = 0;
while( j > 0):
    for i in range(j):
        print("* ", end = ' ')
    for index in range(count*3):
        print(" ", end = ' ')
    for value in range(j):
        print("* ", end = ' ')

    print()
    j -= 1;
    count += 1;

#at the end of this block j == 1 And count == 4

#increasing pattern
while(j < 6):
    for k in range(j):
        print("* ", end = ' ')
    for index1 in range(count*3):
        print(" ", end = ' ')
    for value2 in range(j):
        print("* ", end = ' ')
    print()
    j += 1
    count -= 1;
