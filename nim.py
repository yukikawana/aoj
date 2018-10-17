from utils import input_int

def main():
    n = input_int("n = ")
    A = [-1] * n
    for i in range(n):
        A[i] = input_int("%d= "%i)

    x = 0
    for i in range(n):
        x^=A[i]
    if x != 0:
        print("Alice wins")
    else:
        print("Bob wins")

    


if __name__ == "__main__":
    main()
