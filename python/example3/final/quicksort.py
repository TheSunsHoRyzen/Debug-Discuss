def quick_sort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[0]
    less = [x for x in arr[1:] if x <= pivot]
    more = [x for x in arr[1:] if x > pivot]

    return quick_sort(less) + [pivot] + quick_sort(more)

def main():
    data = [10, 7, 8, 9, 1, 5]
    sorted_data = quick_sort(data)
    print("Sorted array:", sorted_data)

if __name__ == "__main__":
    main()
