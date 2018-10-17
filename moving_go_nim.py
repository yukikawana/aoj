from utils import input_int

def main():
    n = input_int("n = ")
    p = [-1] * n
    for i in range(n):
        p[i] = input_int("p%d = "%i)

    if n & 1:
        p.append(0)
    p.sort()
    x = 0
    for i in range(1, len(p), 2):
        x^=(p[i] - p[i-1] - 1)

    if x != 0:
        print("alice wins")
    else:
        print("bob wins")


if __name__ == "__main__":
    main()
