def factorial(n):

    ##base case
    ##testing out how function works
    # print("factorial has been called with n = " + str(n))
    if n==1:
        return 1

    else:
        # res = n * factorial(n-1)
        # print("intermediate result for ", n, " * factorial(" ,n-1, "): ",res)
        return n * factorial(n-1) #res

# Example:

# 4! = 4 * 3!
# 3! = 3 * 2!
# 2! = 2 * 1
# Replacing the calculated values gives us the following expression

# 4! = 4 * 3 * 2 * 1
# In other words, recursion in computer science is a method where the solution to a problem is based on solving smaller instances of the same problem.

print(factorial(4))