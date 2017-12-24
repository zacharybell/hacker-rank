def input_as_int():
    return int(input().strip())


def foo(x):
    return(x * x)


n = input_as_int()
out = list()

for _ in range(0, n):
    x = input_as_int()
    out.append(foo(x) % (1000000007))

[print(e) for e in out]
