import sys
import heapq

input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))

    if m == 1:
        print(max(a))
        continue

    heap = []
    total = 0
    answer = -10**30

    for x in a:
        if len(heap) == m - 1:
            answer = max(answer, m * x - total)

        heapq.heappush(heap, -x)
        total += x

        if len(heap) > m - 1:
            total += heapq.heappop(heap)

    print(answer)