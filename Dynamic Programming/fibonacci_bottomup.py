import sys


def fib(n):
    """ Calculate the n-th Fibonacci number

    Use Dynamic Programming Bottom-Up "Tabulation" technique.

    :param n: the index of the Fibonacci series
    :return: the n-th Fibonacci number
    """

    # initialize table
    table = [0] * (n + 1)

    # define the base case
    table[1] = 1

    # build the table from the "bottom up"
    for i in range(2, n + 1):
        table[i] = table[i - 1] + table[i - 2]

    # return the solution
    return table[n]


if __name__ == "__main__":
    n = sys.argv[1]
    result = fib(int(n))
    print("fib({0}) = {1}".format(n, result))
