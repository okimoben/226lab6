#3
result = 0  # Global variable
def harmonic_sum(n):
    """
    calculates the harmonic sum using recursion and global variable. does not return anything
    :param n: int: the num up to which harmonic sum will be calculated
    :return: no
    """
    global result
    if n == 0:
        return
    harmonic_sum(n - 1)
    result += 1 / n
