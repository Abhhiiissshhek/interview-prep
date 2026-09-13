import sys

input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))

    # Positions that are not already correct
    pos = [i for i in range(n) if p[i] != i + 1]

    # Already sorted: choose any one index and perform the operation.
    if not pos:
        print("YES")
        continue

    # If we reverse exactly these positions, they must become
    # their corresponding correct values.
    ok = True
    m = len(pos)

    for i in range(m):
        if p[pos[m - 1 - i]] != pos[i] + 1:
            ok = False
            break

    print("YES" if ok else "NO")


    