from functools import reduce

n = int(input().strip())
dist = list()

for _ in range(0, n * 2):
    w = list(map(int, input().strip().split(' ')))
    if len(w) > 1:
        dist.append(reduce((lambda x, y: x * y), w) % 1234567)

[print(x) for x in dist]
