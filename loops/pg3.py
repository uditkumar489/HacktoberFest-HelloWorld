'''Question 3: Given a string, display only those characters
 which are present at an even index number.'''


str=input("Enter a string:")
for i in range(0,len(str),2):
    print(str[i])


#output
'''
Enter a string:aswathy
a
w
t
y
'''