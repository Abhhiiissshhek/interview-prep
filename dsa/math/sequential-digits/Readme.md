# 🔢 Sequential Digits

> **LeetCode #1291**
>
> Difficulty: 🟡 Medium

---

## 📝 Problem Statement

A number has **sequential digits** if every digit is exactly one greater than the previous digit.

Given two integers `low` and `high`, return all sequential digit numbers within the range `[low, high]` in sorted order.

---

## 🧠 Pattern

- Enumeration
- Math
- Number Generation

---

## 💡 Intuition

Instead of checking every number between `low` and `high`, directly generate all possible sequential numbers.

There are only a few valid sequential numbers:

```
12
23
34
...
123
234
345
...
123456789
```

Since the largest digit is `9`, there are only **36 possible sequential numbers**, making brute-force generation efficient.

---

## 🚀 Approach

1. Use the string:

```
"123456789"
```

2. Generate every possible substring of length:

```
2,3,4,...,9
```

Example:

Length = 3

```
123
234
345
456
567
678
789
```

3. Convert each substring into an integer.

4. If it lies within

```
[low, high]
```

add it to the answer.

Since numbers are generated in increasing order, the result is already sorted.

---

## ✅ Example

Input

```
low = 100
high = 300
```

Generated

```
123
234
345
456
...
```

Valid numbers

```
123
234
```

Output

```
[123,234]
```

---

## 🎯 Key Observation

The largest sequential number is

```
123456789
```

The smallest is

```
12
```

Total generated numbers:

```
8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 36
```

Checking only 36 candidates is much faster than iterating through millions of numbers.

---

## ⏱ Complexity

| Complexity | Value |
|------------|-------|
| Time | **O(1)** |
| Space | **O(1)** |

The algorithm always generates at most **36 numbers**, regardless of the input range.

---

## ❌ Mistakes I Made

- Initially thought I needed to check every number in the range.
- Tried comparing adjacent digits for each integer, which is unnecessary.
- Missed that only a fixed number of sequential-digit numbers exist.

---

## 📚 Key Learning

- Sometimes generating all valid candidates is much simpler than validating every possible input.
- Constraints can reveal when an "enumeration" approach is actually optimal.
- Look for problems where the search space is naturally very small.

---

## 🎯 Recognition Clues

Think about enumeration when:

- The number of valid answers is very small.
- You can generate all candidates directly.
- Checking every integer in a large range is inefficient.

---

## 🧩 Interview Insight

The key insight is realizing that the solution space is fixed.

Instead of searching through `[low, high]`, generate all possible sequential numbers once and filter them by range.

This transforms a potentially huge search into a constant-size computation.

---

## 🔗 Related Problems

- Lexicographical Numbers
- Count Numbers with Unique Digits
- Strobogrammatic Number
- Confusing Number

---

## 🏷 Tags

`Math` `Enumeration`
