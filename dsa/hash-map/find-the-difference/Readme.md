# 🔍 Find the Difference

> **LeetCode #389**
>
> Difficulty: 🟢 Easy

---

## 📝 Problem Statement

You are given two strings `s` and `t`.

String `t` is created by randomly shuffling `s` and adding one extra character.

Return the extra character.

---

## 🧠 Pattern

- Hash Map (Frequency Counting)
- XOR (Optimal Space)

---

## 💡 Intuition

Since `t` contains every character of `s` plus one additional character, we need to identify which character appears one extra time.

There are multiple ways to solve this problem:

1. Count the frequency of every character using a Hash Map.
2. Sort both strings and compare.
3. Use XOR to cancel matching characters.

The XOR solution is elegant because identical characters cancel each other, leaving only the extra character.

---

## 🚀 Approaches

### Approach 1: Hash Map

- Count every character in `s`.
- Traverse `t`.
- Decrease the frequency.
- The first character with no remaining count is the answer.

### Approach 2: XOR (Recommended)

XOR has an interesting property:

```
a ^ a = 0
0 ^ x = x
```

If we XOR every character in both strings, all matching characters cancel each other out.

The remaining value is the extra character.

---

## ⏱ Complexity

| Approach | Time | Space |
|----------|------|-------|
| Hash Map | O(n) | O(n) |
| XOR | **O(n)** | **O(1)** |

---

## ❌ Mistakes I Made

- Initially thought sorting was necessary.
- Forgot that XOR can eliminate duplicate characters.
- Didn't immediately recognize the frequency-counting pattern.

---

## 📚 Key Learning

- Frequency counting is useful when comparing two collections.
- XOR is extremely powerful for problems involving one unmatched element.
- Always look for mathematical properties before using extra memory.

---

## 🎯 Recognition Clues

Think about XOR or Hash Maps when a problem mentions:

- One extra element
- One missing element
- Duplicate cancellation
- Frequency comparison
- Compare two collections

---

## 🔗 Related Problems

- Single Number
- Missing Number
- Valid Anagram
- Find All Numbers Disappeared in an Array

---

## 🏷 Tags

`Hash Map` `Bit Manipulation` `String`