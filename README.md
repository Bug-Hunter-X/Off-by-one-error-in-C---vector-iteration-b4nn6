# Off-by-one Error in C++ Vector Iteration
This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`. The error occurs when the loop condition includes `vec.size()` instead of `vec.size() -1`, resulting in an attempt to access an element beyond the valid range of the vector.

## Bug Description
The code iterates through a vector using a `for` loop. The loop condition `i <= vec.size()` is incorrect.  The last valid index of a vector is `vec.size() - 1`.  Accessing `vec[vec.size()]` results in undefined behavior.

## Solution
The solution modifies the loop condition to `i < vec.size()` ensuring that the loop only iterates through valid indices of the vector.