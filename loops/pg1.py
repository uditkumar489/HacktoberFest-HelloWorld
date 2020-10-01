'''Question 1: Given a two integer numbers return their product 
and  if the product is greater than 1000, then return their sum'''


num1=int(input("Enter the first no:"))
num2=int(input("Enter the second no:"))

product=num1*num2

if(product>1000):
    print("sum is:",num1+num2)
else:
    print("Invalid numbers")

#output

'''
Enter the first no:32
Enter the second no:200
sum is: 232
'''