def quick_sort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[-1]  
    less = [x for x in arr if x < pivot]  
    more = [x for x in arr if x > pivot]

    return [pivot] + quick_sort(less) + quick_sort(more)  

def main():
    data = [4, 3, 2, 1]
    print("Sorted:", quick_sort(data))
