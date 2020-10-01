'''
Print the following pattern
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
'''

print("Second Number Pattern ")
lastNumber = 6
for row in range(1, lastNumber):
    for column in range(1, row + 1):
        print(column, end=' ')
    print("")