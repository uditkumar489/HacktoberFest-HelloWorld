def trailing_zeroes(n) :
    count = 0
    i = 1
    while n//(5**i) :
        count += n//(5**i)
        i += 1
    return count

t = int(input())
while t :
    t -= 1
    n = int(input())
    print(trailing_zeroes(n))
