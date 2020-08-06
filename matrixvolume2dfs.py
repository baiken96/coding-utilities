# Write your code here
from sys import setrecursionlimit
setrecursionlimit(1000009)
global counter
 
def make_true(x,y,z):
    for i,j,k in [(x,y,z-1),(x,y,z+1),(x,y-1,z),
                  (x,y+1,z),(x-1,y,z),(x+1,y,z)]:
        if 0<=i<Z and 0<=j<X and 0<=k<Y:
            if box[i][j][k] == 0 and visited[i][j][k] == False:
                visited[i][j][k] = True
                make_true(i,j,k)
    
def trapped(x,y,z):
    global counter
    visited[x][y][z] = True
    counter += 1
    for i,j,k in [(x,y,z-1),(x,y,z+1),(x,y-1,z),
                  (x,y+1,z),(x-1,y,z),(x+1,y,z)]:
        if 0<=i<Z and 0<=j<X and 0<=k<Y:
            if box[i][j][k] == 0 and visited[i][j][k] == False:
                if not trapped(i,j,k):
                    make_true(x,y,z)
                    return False
        else:
            make_true(x,y,z)
            return False
    return True
 
for _ in range(int(input())):
    result = 0
    X,Y,Z = map(int,input().split())
    box = [[[] for i in range(X)] for j in range(Z)]
    visited = [[[False]*Y for i in range(X)] for j in range(Z)]
    for i in range(Z):
        for j in range(X):
            box[i][j] = list(map(int,input().split()))
    for i in range(Z):
        for j in range(X):
            for k in range(Y):
                if box[i][j][k] == 0 and visited[i][j][k] == False:
                    counter = 0
                    if trapped(i,j,k):
                        result += counter
    print(result)
