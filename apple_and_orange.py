def on_house(h0, h1, t, d):
    loc = t + d
    return (loc >= h0 and loc <= h1)


s, t = map(int, input().strip().split(' '))
a, o = map(int, input().strip().split(' '))
m, n = map(int, input().strip().split(' '))

n_apples = 0
n_oranges = 0

apples = list(map(int, input().strip().split(' ')))
oranges = list(map(int, input().strip().split(' ')))


for i in range(m):
    if on_house(s, t, a, apples[i]):
        n_apples += 1

for i in range(n):
    if on_house(s, t, o, oranges[i]):
        n_oranges += 1

print(n_apples)
print(n_oranges)
