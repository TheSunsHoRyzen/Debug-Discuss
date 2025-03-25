class Item:
    def __init__(self, value, weight):
        self.value = value
        self.weight = weight

def fractional_knapsack(items, capacity):
    if capacity == 0 or not items:
        return 0

    # Sort by value-to-weight ratio
    items.sort(key=lambda x: x.value / x.weight, reverse=True)
    item = items[0]

    if item.weight <= capacity:
        return item.value + fractional_knapsack(items[1:], capacity - item.weight)
    else:
        return (item.value / item.weight) * capacity

def main():
    items = [Item(60, 10), Item(100, 20), Item(120, 30)]
    capacity = 50
    max_value = fractional_knapsack(items, capacity)
    print(f"Maximum value: {max_value:.2f}")

if __name__ == "__main__":
    main()
