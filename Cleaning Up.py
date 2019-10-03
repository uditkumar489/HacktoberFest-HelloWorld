t = int(input())
while t :
    t -= 1
    n, m = input().split()
    a = input().split()
    a = list(map(int,a))
    chef = 1
    assistant = 0
    cheff = []
    assi = []
    for i in range(1,int(n)+1) :
        if i not in a :
            if chef == 1 :
                chef = 0
                assistant = 1
                cheff.append(i)
            else :
                assistant = 0
                chef = 1
                assi.append(i)
    chef_str = ""
    assi_str = ""
    for i in cheff :
        chef_str += str(i) +" "
    print(chef_str)
    for i in assi :
        assi_str += str(i) + " "
    print(assi_str)
