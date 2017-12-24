
def next_point(p1, p2):
    return (p2[0] + (p2[0] - p1[0]), p2[1] + (p2[1] - p1[1]))


n = int(input().strip())
points = list()

for _ in range(0, n):
    p_x, p_y, q_x, q_y = map(int, input().strip().split(' '))
    points.append(next_point((p_x, p_y), (q_x, q_y)))

for p in points:
    print("{} {}".format(p[0], p[1]))
