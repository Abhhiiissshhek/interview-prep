# 🔄 Permutations II

> **LeetCode #47**
>
> Difficulty: 🟡 Medium

---

## 📝 Problem Statement

Given an integer array `nums` that may contain duplicate values, return **all unique permutations** of the array.

The returned permutations can be in any order.

---

## 🧠 Pattern

- Backtracking
- Recursion
- Duplicate Handling

---

## 💡 Intuition

To generate all permutations, we try placing every unused element at the current position.

However, duplicate numbers can produce identical permutations.

For example:

```
[1,1,2]
```

If we choose the first `1` or the second `1` as the first element, both lead to the same permutation.

To avoid duplicates:

- Sort the array first.
- Skip duplicate numbers when the previous identical number hasn't been used in the current recursive path.

This ensures each unique permutation is generated exactly once.

---

## 🚀 Approach

### Step 1

Sort the array.

Example:

```
[1,2,1]
↓

[1,1,2]
```

Sorting places duplicates together.

---

### Step 2

Use Backtracking.

Maintain:

- Current permutation (`path`)
- Boolean array (`used`) to track selected elements

---

### Step 3

For each index:

- Skip if already used.
- Skip duplicate values when the previous identical element has not been used.
- Choose the element.
- Recurse.
- Backtrack.

---

## 🎯 Duplicate Skipping Rule

The key condition is:

```python
if i > 0 and nums[i] == nums[i-1] and not used[i-1]:
    continue
```

This prevents generating the same permutation multiple times.

---

## Example

Input

```
[1,1,2]
```

Output

```
[
 [1,1,2],
 [1,2,1],
 [2,1,1]
]
```

---

## ⏱ Complexity

| Complexity | Value |
|------------|-------|
| Time | **O(n × n!)** |
| Space | **O(n)** (excluding output) |

---

## ❌ Mistakes I Made

- Forgot to sort the array before backtracking.
- Generated duplicate permutations.
- Didn't understand why duplicate skipping depends on the previous element's `used` state.

---

## 📚 Key Learning

- Sorting is often used before backtracking to simplify duplicate handling.
- Backtracking follows the pattern:
  - Choose
  - Explore
  - Undo (Backtrack)
- The `used` array helps ensure each element is used exactly once per permutation.

---

## 🎯 Recognition Clues

Think of Backtracking when the problem asks for:

- All permutations
- All combinations
- All subsets
- Every possible arrangement
- Every valid configuration

If duplicates are present:

- Sort first.
- Add duplicate-skipping logic.

---

## 🔗 Related Problems

- Permutations
- Subsets
- Subsets II
- Combination Sum
- Combination Sum II
- N-Queens
- Letter Combinations of a Phone Number

---

## 🏷 Tags

`Backtracking` `Recursion`