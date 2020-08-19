# Assumes input of format 0 1 2 3 4 5

f = open("simpleparse.txt", 'r')

lines = f.readlines()

for line in lines:

    array = list(map(int, line.split()))

    total = sum(array)

    print(total)

f.close()
