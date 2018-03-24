import sys

# initialize the lookup table (or "memo")
memo = {}


def fib(n):
    """ Calculate the n-th Fibonacci number

    Use Dynamic Programming Top-Down "Memoization" technique.

    :param n: the index of the Fibonacci series
    :return: the n-th Fibonacci number
    """

    # don't bother doing anything if we've already recursed on this value
    if n in memo.keys():
        return memo[n]

    # define the base cases
    if n == 0 or n == 1:
        return 1

    # MEMOIZE the recursion (so we don't have to calculate it later
    memo[n] = fib(n - 1) + fib(n - 2)

    # return the value of the recursion, if recursed
    return memo[n]


if __name__ == "__main__":
    n = sys.argv[1]
    result = fib(int(n))
    print("fib({0}) = {1}".format(n, result))
