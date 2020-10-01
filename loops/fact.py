'''
Write a program which can compute the factorial of a given numbers.
The results should be printed in a comma-separated sequence on a single line.
Suppose the following input is supplied to the program:
8
Then, the output should be:
40320'''

n=int(input("Enter a given no:"))
f=1
if(n==0):
    print("Factorial is zero")
else:
    for i in range(1,n+1):
        f=f*i
    print(f)


#output

'''Enter a given no:8
40320'''