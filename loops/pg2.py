'''Question 2: Given a range of first 10 numbers, Iterate from start number to the end number 
and print the sum of the current number and previous number'''


for i in range(0,10):
    if(i==0):
        print('Previous no',i,'Current no',i,'sum',(i+i))
    else:
        print('Previous no',i-1,'Current no',i,'sum',(i+(i-1)))


#output

'''
Previous no 0 Current no 0 sum 0
Previous no 0 Current no 1 sum 1
Previous no 1 Current no 2 sum 3
Previous no 2 Current no 3 sum 5
Previous no 3 Current no 4 sum 7
Previous no 4 Current no 5 sum 9
Previous no 5 Current no 6 sum 11
Previous no 6 Current no 7 sum 13
Previous no 7 Current no 8 sum 15
Previous no 8 Current no 9 sum 17
'''