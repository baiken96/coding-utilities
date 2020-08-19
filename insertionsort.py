def insertion_sort(arr, i):
    if i > 0:
        insertion_sort(arr, i-1)
        x = arr[i]
        j = i-1
        while j>=0 and arr[j]>x:
            arr[j+1] = arr[j]
            j-=1
        arr[j+1]=x
        return arr
    else:
        return None

n = list(map(int, input("Enter array of integers to sort separated by spaces: ").split()))

n = insertion_sort(n, len(n)-1)

print(n)
