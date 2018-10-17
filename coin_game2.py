from utils import input_int

mem = {}
def grundy(n, a):
    if n == 0:
        return 0
    if n in mem:
        return mem[n]
    s = []
    for i in range(len(a)):
        r = n - a[i]
        if r >= 0:
            s.append(grundy(r, a))

    cnt = 0
    while cnt in s:
        cnt+=1
    mem[n] = cnt
    return mem[n]
    

def main():
    n = input_int("n = ")
    x = []
    for i in range(n):
        x.append(input_int("coins in %dth mt= "%i))
    k = input_int("k = ")
    a = []
    for i in range(k):
        a.append(input_int("options in %dth mt= "%i))
    ini = 0
    for i in range(n):
        ini^=grundy(x[i],a)

    print("Alice wins" if ini else "Bob wins")






if __name__ == "__main__":
    main()
