# 🔹 Two Sum

> **LeetCode #1**  
> Difficulty: 🟢 Easy

---

## 📝 Problem Statement

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

---

## 🧠 Pattern

- Hash Map
- One-Pass Lookup

---

## 💡 Intuition

The brute-force solution checks every pair of numbers, resulting in **O(n²)** time complexity.

A better approach is to use a **Hash Map** to store numbers we've already seen.

For each element:

1. Compute the complement:
   ```
   complement = target - current_number
   ```
2. Check if the complement already exists in the Hash Map.
3. If it does, return both indices.
4. Otherwise, store the current number and continue.

This allows us to find the answer in a single pass.

---

## 🚀 Optimal Approach

Use a dictionary (Hash Map) where:

- **Key** → Number
- **Value** → Index

Since dictionary lookup is **O(1)** on average, the entire solution runs in linear time.

---

## ⏱ Complexity

| Operation | Complexity |
|-----------|-----------:|
| Time | **O(n)** |
| Space | **O(n)** |

---

## ❌ Mistakes I Made

- Forgot that the complement should be searched **before** inserting the current number.
- Initially considered using nested loops, which leads to **O(n²)**.

---

## 📚 Key Learning

✅ Whenever a problem asks to quickly find a value that complements another value, think:

> **"Can a Hash Map reduce repeated searching?"**

Hash Maps are commonly used for:

- Fast lookups
- Frequency counting
- Finding complements
- Duplicate detection

---

## 🔗 Related Problems

- Contains Duplicate
- Two Sum II – Input Array Is Sorted
- 3Sum
- 4Sum

---

## 📌 Tags

`Array` `Hash Map`