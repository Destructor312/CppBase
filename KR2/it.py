def foo(x):
    L = 1
    M = 0
    while x > 0:
        M = M + 1
        if x % 7 != 0:
            L = L * (x % 7)
        x = x // 7
    return (L, M)

print([i for i in range(1000) if foo(i) == (5, 3)])