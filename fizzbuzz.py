t = input()
t = int(t)
cases = input()
cases = cases.split()

for case in range(t):
    n = int(cases[case])

    for i in range(1,n+1):
        if i%3==0 and i%5==0:
            print("FizzBuzz")
        elif i%3==0:
            print("Fizz")
        elif i%5==0:
            print("Buzz")
        else:
            print(i)
