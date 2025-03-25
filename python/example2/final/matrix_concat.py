def vertical_concatenate(matrix):
    if not matrix:
        return []

    max_len = max(len(row) for row in matrix)
    result = []

    for i in range(max_len):
        col = []
        for row in matrix:
            if i < len(row):
                col.append(row[i])
        result.append(" ".join(col))

    return result

def main():
    matrix = [["a", "b", "c"], ["d", "e"], ["f", "g", "h", "i"]]
    output = vertical_concatenate(matrix)
    for line in output:
        print(line)

if __name__ == "__main__":
    main()
