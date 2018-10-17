from utils import input_int
def extgcd(a, b):
    if b == 0:
        return a, 1, 0
    d, xp, yp = extgcd(b, a % b)
    x = yp
    y = xp - a // b * yp
    return d, x, y

def main():
    a = input_int("a = ")
    b = input_int("b = ")
    d, x, y = extgcd(a, b)
    ad = a//d
    bd = b//d
    print(a, b, ad, bd)
    #ad * (X - x) = -bd * (Y - y), X, Y are non-constant variables
    #X - x = -bd * t, X = -bd * t + x
    #Y - y = ad * t, Y = ad * t + y
    for t in range(10):
        X = -bd * t + x
        Y = ad * t + y
        print(X, Y, X * a + Y * b)




if __name__ == "__main__":
    main()
