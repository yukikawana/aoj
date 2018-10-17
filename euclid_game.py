from utils import input_int

def swap(a, b):
    if b > a:
        tmp = a
        a = b
        b = tmp
    return a, b

def main():
    a = input_int("a = ")
    b = input_int("b = ")
    #34, 12 stan wins
    #15, 24 charlie wins

    #if a - b < b
    #if a - b > b
    #a - bk < b then a - b(k - 1)

    assert(a > b)
    turn = 1
    while True:
        assert(a >= 0 and b >= 0)
        if a == 0 or b == 0:
            break

        a, b = swap(a, b)
        print(a, b, a - b)
        if (a - b) >= b:
            print("occurs")
            if turn == 1:
                print("Stan wins")
            else:
                print("Charlie wins")
            #break
        turn^=1
        a-=b

    

if __name__ == "__main__":
    main()
