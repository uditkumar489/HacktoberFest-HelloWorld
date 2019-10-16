def towerofhanoi(n, source, aux, dest):
    # Base case
    if n == 0:
        return
    if n == 1:
        print(source, dest)
        
    # Recursive call
    else:
        towerofhanoi(n-1, source, dest, aux)
        print(source, dest)
        towerofhanoi(n-1, aux, source, dest)

n=int(input())
towerofhanoi(n, 'a', 'b', 'c')
