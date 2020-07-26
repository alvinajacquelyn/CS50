h = int(input("Height: "))

if h<= 1 and h<=8 :
    for j in range(h+1):
        print(" " * (h-j) + "#" * j + "  " + "#" * j + " " * (h-j))

else:
    print("Try again, enter Height between 1 and 8, inclusive")