```markdown
# Sparse Matrix Checker

## Description
This program defines a 3x3 matrix and checks whether it qualifies as a **sparse matrix**.  
A sparse matrix is one where the number of zero elements is **greater than or equal to 5**.

## Features
- Hardcoded 3x3 matrix.
- Counts how many zero elements are in the matrix.
- Determines if the matrix is sparse based on the number of zeros.
- Displays the matrix in a formatted layout.

## Functions
- `RandomNumber(int From, int To)`: Generates a random number (not used here).
- `FillaMatrix3x3(...)`: Placeholder function (has no effect in this context).
- `IsSparceMatrix(...)`: Returns `true` if the matrix contains 5 or more zeros.
- `PrintMatrix(...)`: Prints the matrix with padded formatting.

## Sparse Matrix Criteria
If zero elements `>= 5` → Sparse  
Else → Not Sparse

## Example
Matrix:
```

00  00  00
03  00  04
00  01  00

```
Output:
```

Yes : It is Sparse Matrix.

```

