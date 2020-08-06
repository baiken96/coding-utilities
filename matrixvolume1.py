def isBoxedIn(matrix, x, y, L):
    try:
        a=matrix[x][y-1]==1
    except IndexError:
        return False
    try:
        b=matrix[x][y+1]==1
    except IndexError:
        return False
    try:
        c=matrix[x-1][y]==1
    except IndexError:
        return False
    try:
        d=matrix[x+1][y]==1
    except IndexError:
        return False
    try:
        e=matrix[x-L][y]==1
    except IndexError:
        return False
    try:
        f=matrix[x+L][y]==1
    except IndexError:
        return False
    return a and b and c and d and e and f

t = input()
t = int(t)

for case in range(t):
    dim = input()
    dim = dim.split()
    x = int(dim[0])
    y = int(dim[1])
    z = int(dim[2])

    matrix = list()
    for i in range(x*z):
        coord = input()
        coord = coord.split()
        row = list()
        for j in range(y):
            row.append(int(coord[j]))
        matrix.append(row)

    count = 0
    for d in range(x*z):
        for e in range(y):
            if matrix[d][e]==0 and isBoxedIn(matrix,d,e,x):
                count+=1
    
    print(count)
