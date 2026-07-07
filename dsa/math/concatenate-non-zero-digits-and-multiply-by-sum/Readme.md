# 🔢 Concatenate Non-Zero Digits and Multiply by Sum I

> **Difficulty:** 🟢 Easy

---

## 📝 Problem Statement

Given an integer `n`:

1. Remove all zero digits while preserving the order of the remaining digits.
2. Form a new integer `x`.
3. Compute the sum of digits of `x`.
4. Return `x × sum`.

If there are no non-zero digits, then `x = 0`.

---

## 🧠 Pattern

- Math
- Digit Manipulation
- String Processing

---

## 💡 Intuition

The problem requires constructing a new number using only the non-zero digits of `n`.

While building this number:

- Ignore every `0`.
- Append every non-zero digit to the new number.
- Simultaneously calculate the digit sum.

Finally,

```
Answer = x × sum
```

---

## 🚀 Approach

1. Convert the integer into a string.
2. Traverse every character.
3. Ignore `'0'`.
4. Append every non-zero digit to build `x`.
5. Add the digit to the running sum.
6. Return `x * sum`.

---

## ✅ Example

Input

```
10203004
```

Non-zero digits

```
1 2 3 4
```

Constructed number

```
1234
```

Digit Sum

```
1 + 2 + 3 + 4 = 10
```

Answer

```
1234 × 10 = 12340
```

---

## ⏱ Complexity

| Complexity | Value |
|------------|-------|
| Time | **O(d)** |
| Space | **O(d)** |

Where `d` is the number of digits.

---

## ❌ Mistakes I Made

- Forgot to ignore zero digits.
- Forgot to update the digit sum while constructing the new number.
- Didn't handle the case when `n = 0`.

---

## 📚 Key Learning

- Digit manipulation problems can often be simplified by converting the number into a string.
- Multiple values can be computed in a single traversal.
- Always think about edge cases like `0`.

---

## 🎯 Recognition Clues

Consider this approach when a problem asks you to:

- Process digits individually
- Ignore certain digits
- Construct a new integer
- Calculate digit sums
- Perform digit transformations

---

## 🏷 Tags

`Math` `String` `Digit Manipulation`