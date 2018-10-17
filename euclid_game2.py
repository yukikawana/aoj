from utils import input_int

def swap(a, b):
    if b > a:
        tmp = a
        a = b
        b = tmp
    return a, b

def dfs(a, b):
    a, b = swap(a, b)
    if b == 0:
        return True
    elif a//b == 1:
        return not dfs(b, a - b)
    else:
        return True


def main():
    a = input_int("a = ")
    b = input_int("b = ")
    print("Stan wins" if dfs(a, b) else "Charlie wins")


if __name__ == "__main__":
    main()
