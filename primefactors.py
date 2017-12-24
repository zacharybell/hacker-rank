primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61]

upper = 1
limit = []
for e in primes:
    upper *= e
    limit.append(upper)


def max_prime(arr, n):
    for i in range(len(arr)):
        if arr[i] > n:
            return i
    return -1


q = int(input().strip())

out = []
for _ in range(q):
    n = int(input().strip())
    out.append(max_prime(limit, n))

[print(x) for x in out]
