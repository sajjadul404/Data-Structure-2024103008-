rows = 2
cols = 2

matrix = []

for i in range(rows):
    row = []
    for j in range(cols):
        value = int(input(f"Enter value for matrix[{i}][{j}]: "))
        row.append(value)
    matrix.append(row)

print("The 2D array is:")
for row in matrix:
    print(row)
