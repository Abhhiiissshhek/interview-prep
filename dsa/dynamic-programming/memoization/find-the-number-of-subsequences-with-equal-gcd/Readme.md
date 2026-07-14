# 🧮 Find the Number of Subsequences With Equal GCD

> **LeetCode #3336**
>
> Difficulty: 🔴 Hard

---

## 📝 Problem Statement

Given an integer array `nums`, find the number of pairs of **non-empty**, **disjoint** subsequences whose GCDs are equal.

Return the total number of such pairs modulo **10⁹ + 7**.

---

## 🧠 Pattern

- Dynamic Programming
- Memoization
- Number Theory (GCD)

---

## 💡 Intuition

Each element has exactly **three choices**:

1. Ignore it.
2. Add it to the first subsequence.
3. Add it to the second subsequence.

While processing the array, we only need to know:

- the current index,
- the GCD of the first subsequence,
- the GCD of the second subsequence.

The actual elements inside the subsequences are not important once their GCDs are known.

This naturally leads to a memoized Dynamic Programming solution.

---

## 🚀 Approach

Define the DP state:

```
dp(index, gcd1, gcd2)
```

where

- `index` → current position in the array
- `gcd1` → current GCD of the first subsequence
- `gcd2` → current GCD of the second subsequence

For every element we have three transitions:

### 1. Skip

```
dfs(i+1, gcd1, gcd2)
```

### 2. Put into first subsequence

```
newGcd1 = gcd(gcd1, nums[i])
```

```
dfs(i+1, newGcd1, gcd2)
```

### 3. Put into second subsequence

```
newGcd2 = gcd(gcd2, nums[i])
```

```
dfs(i+1, gcd1, newGcd2)
```

When every element has been processed:

- both subsequences must be non-empty
- both GCDs must be equal

If both conditions are satisfied, return `1`; otherwise return `0`.

---

## 🎯 State Definition

```
dp(i, g1, g2)
```

represents the number of valid ways after processing elements from index `i`, where:

- `g1` is the GCD of the first subsequence.
- `g2` is the GCD of the second subsequence.

---

## 🧩 Base Case

When

```
i == n
```

Return

```
1
```

if

```
g1 == g2
```

and both subsequences are non-empty.

Otherwise return

```
0
```

---

## 🔄 State Transition

```
answer =

Skip current element

+

Put into first subsequence

+

Put into second subsequence
```

---

## ⏱ Complexity

| Complexity | Value |
|------------|-------|
| Time | O(n × G²) (memoized states) |
| Space | O(n × G²) |

where

- `n ≤ 200`
- `G ≤ 200` (maximum possible GCD value)

---

## ❌ Mistakes I Made

- Initially tried generating every pair of subsequences.
- Forgot that only the current GCD matters, not the complete subsequence.
- Didn't realize `0` can be used as a sentinel GCD for an empty subsequence.

---

## 📚 Key Learning

- Dynamic Programming states should capture only the information needed for future decisions.
- Memoization avoids recomputing identical `(index, gcd1, gcd2)` states.
- GCD is an associative property, making it suitable for DP state compression.

---

## 🎯 Recognition Clues

Think about **Memoized DP** when a problem involves:

- Building multiple subsequences
- Three or more choices per element
- Comparing properties of subsequences
- GCD/LCM as part of the state
- Counting valid configurations

---

## 🧩 Interview Insight

The key observation is that **the exact contents of a subsequence do not matter—only its current GCD does**.

By storing `(index, gcd1, gcd2)` instead of the subsequences themselves, the search space becomes manageable. This is a classic example of **state compression** in Dynamic Programming.

---

## 🔗 Related Problems

- GCD Sort of an Array
- Number of Different Subsequences GCDs
- Partition Equal Subset Sum
- Target Sum
- Distinct Subsequences

---

## 🏷 Tags

`Dynamic Programming` `Memoization` `GCD` `Number Theory`