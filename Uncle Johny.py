t = int(input())
for l in range(t) :
    n = int(input())
    for k in range(n) :
        i,n,q = input().split()
        if int(n)%2 == 0 :
            print(int(n)//2)
        else :
            if int(i) == 1 :
                if int(q) == 1 :
                    print(int(n)//2)
                else :
                    print((int(n)//2) + 1)
            else :
                if int(q) == 2 :
                    print(int(n)//2)
                else :
                    print((int(n)//2) + 1)
