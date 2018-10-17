from utils import input_int

def main():
    N = input_int("N = ")
    A = input("A = ").split(" ")
    A = list(map(int, A))
    print(A)
    for i in range(1, len(A)):
        v = A[i]
        j = i
        while j - 1 >= 0 and A[j - 1] > v:
            A[j] = A[j - 1]
            print(A)
            j -= 1
        A[j] = v
        print(A)
    

if __name__ == "__main__":
    main()
