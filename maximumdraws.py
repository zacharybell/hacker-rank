def input_as_int():
    return int(input().strip())


n = input_as_int()

max_draws = list()
for _ in range(0, n):
    max_draws.append(input_as_int() + 1)

[print(x) for x in max_draws]
