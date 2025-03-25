def vertical_concatenate(matrix):
    result = []
    max_len = len(matrix)  

    for i in range(max_len):
        col = ""
        for row in matrix:
            col += row[i] + " " 
        result.append(col.strip())

    return result

def main():
    matrix = [["a", "b"], ["c", "d", "e"], ["f"]]
    output = vertical_concatenate(matrix)
    print(output)  

if __name__ == "__main__":
    main()
