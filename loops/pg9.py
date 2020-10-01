'''
Print the following pattern using for loop
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1
'''

n = 5
k = 5
for row in range(0,n+1):
    for column in range(k-row,0,-1):
        print(column,end=' ')
    print("")