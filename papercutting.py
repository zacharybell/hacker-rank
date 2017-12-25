
def min_squares(m, n):
    return (m - 1) + m * (n - 1)


x, y = (int(e) for e in input().strip().split(' '))

print(min_squares(x, y))
