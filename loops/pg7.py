'''
Given a list iterate it and display numbers which are divisible by 5 and if you find number greater than 150 stop the loop iterationGiven a list iterate it and display numbers which are divisible by 5 and
if you find number greater than 150 stop the loop iteration
'''
12, 15, 32, 42, 55, 75, 122, 132, 150, 180, 200

l=[]
n=int(input("Enter the no of elements in the list:"))
for i in range(1,n+1):
    x=int(input("No:"))
    l.append(x)
print(l)

for i in l:
    if(i>150):
        break
    elif(i%5==0):
        print(i)