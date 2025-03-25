class Item:
    def __init__(self, value, weight):
        self.value = value
        self.weight = weight

def fractional_knapsack(items, capacity):
    if not items or capacity == 0:
        return 0

    items.sort(key=lambda x: x.weight / x.value)  

    item = items[0]
    if capacity <= item.weight:
        return item.value * capacity  
    else:
        return item.value + fractional_knapsack(items[1:], capacity - item.weight)

def main():
    items = [Item(60, 10), Item(100, 20), Item(120, 30)]
    capacity = 50
    result = fractional_knapsack(capacity, items)  
    print("Max value:", result)

if __name__ == "__main__":
    main()
