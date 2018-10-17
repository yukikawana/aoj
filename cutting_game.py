from utils import input_int

mem = {}
def grundy(H, W):
    key = (H, W)
    if key in mem:
        return mem[key]
    s = []
    for h in range(2, H - 1):
        s.append(grundy(h, W) ^ grundy(H - h, W))
    for w in range(2, W - 1):
        s.append(grundy(H, w) ^ grundy(H, W - w))

    cnt = 0
    while cnt in s:
        cnt+=1
    mem[key] = cnt
    return mem[key]
    

def main():
    H = input_int("h = ")
    W = input_int("w = ")

    print("Alice wins" if grundy(H, W) else "Bob wins")






if __name__ == "__main__":
    main()
