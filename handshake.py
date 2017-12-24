def input_as_int():
    return int(input().strip())


n = input_as_int()

handshakes = list()
for _ in range(0, n):
    x = input_as_int()
    handshakes.append((x * (x-1)) // 2)

[print(x) for x in handshakes]
