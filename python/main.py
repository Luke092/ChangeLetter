def move(string: str) -> str:
    alpha: list[str] = list("abcdefghijklmnopqrstuvwxyz")
    m = len(alpha)
    res = []
    for c in string:
        i = (alpha.index(c) + 1) % m
        res.append(alpha[i])
    return "".join(res)



if __name__ == '__main__':
    print(move("hello"))

    print(move("bye"))

    print(move("welcome"))