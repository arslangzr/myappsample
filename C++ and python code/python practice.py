number = int(input("Enter a number to print table: "))
terms = int(input("Enter number of terms to multiply: "))


def Multiplier(n, t):
    for i in range(0, t):
        print('%02d' % n, " * ",'%02d' % (i+1), " = ", '%02d' % (n*(i+1)))


Multiplier(number, terms)
