# Cpp-Learnings 🚀

This repository contains my C++ practice codes, problem-solving exercises, and data structure implementations as part of my learning journey.

## 📁 Contents

- Basic C++ programs (input/output, loops, functions)
- Searching algorithms (e.g., Binary Search)
- Sorting algorithms (coming soon)
- Data Structures (arrays, vectors, etc.)
- Competitive programming practice problems

## 🎯 Purpose

To build a strong foundation in C++ programming and algorithms, preparing for:
- Competitive programming challenges
- Software development internships/jobs
- MSc studies in the USA with scholarship opportunities

## 🔍 Sample Code Snippet (Binary Search)

```cpp
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
👤 Author
Abrar Foysal
1st-year CSE student | Aspiring MSc candidate | Lifelong learner
