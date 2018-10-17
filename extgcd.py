from read_int import utils
def extgcd(a, b):
    if b == 0:
        return a, 1, 0
    d, xp, yp = extgcd(b, a % b)
    x = yp
    y = xp - a // b * yp
    return d, x, y

def main():
    a = read_int("a = ")
    b = read_int("b = ")
    print(extgcd(a, b))

if __name__ == "__main__":
    main()
