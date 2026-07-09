# 🔗 Path Existence Queries in a Graph I

> **LeetCode #3532**
>
> Difficulty: 🟡 Medium

---

## 📝 Problem Statement

You are given:

- `n` nodes labeled from `0` to `n - 1`
- A sorted array `nums`
- An integer `maxDiff`

An undirected edge exists between two nodes if:

```
|nums[i] - nums[j]| <= maxDiff
```

For each query `[u, v]`, determine whether there exists a path between node `u` and node `v`.

Return a boolean array containing the answer for every query.

---

## 🧠 Pattern

- Union Find (Disjoint Set Union)
- Connected Components
- Graph

---

## 💡 Intuition

Building every possible edge would require checking every pair of nodes.

```
O(n²)
```

This is far too slow for `n = 100000`.

The important observation is:

Since `nums` is already **sorted**, if

```
nums[i+1] - nums[i] <= maxDiff
```

then these two nodes belong to the same connected component.

By connecting only adjacent nodes, every reachable node becomes part of the same component.

After building the components, every query becomes a simple component comparison.

---

## 🚀 Approach

### Step 1

Initialize a Union Find (DSU).

Every node starts as its own parent.

---

### Step 2

Traverse adjacent elements.

If

```
nums[i] - nums[i-1] <= maxDiff
```

perform

```
union(i, i-1)
```

---

### Step 3

For every query

```
(u, v)
```

Check

```
find(u) == find(v)
```

If both belong to the same component

```
True
```

otherwise

```
False
```

---

## 🎯 Key Observation

Since the array is sorted,

we never need to compare every pair.

Only adjacent values matter.

Example

```
2 5 6 8
```

```
2 --X-- 5

5 ---- 6

6 ---- 8
```

Union

```
5 ↔ 6

6 ↔ 8
```

Now

```
5

|

6

|

8
```

belong to the same connected component.

---

## ⏱ Complexity

| Complexity | Value |
|------------|-------|
| Build DSU | O(n α(n)) |
| Each Query | O(α(n)) |
| Total | O((n + q) α(n)) |

where `α(n)` is the inverse Ackermann function (almost constant).

---

## ❌ Mistakes I Made

- Initially tried constructing every edge.
- Considered BFS for every query, leading to TLE.
- Missed the fact that the array is already sorted.

---

## 📚 Key Learning

- Union Find is ideal for connectivity queries.
- Sorted arrays often allow comparing only adjacent elements.
- Recognizing connected components can simplify graph problems dramatically.

---

## 🎯 Recognition Clues

Think about Union Find when a problem asks:

- Are two nodes connected?
- Multiple connectivity queries
- Merge groups
- Connected components
- Dynamic graph connectivity

---

## 🔗 Related Problems

- Number of Provinces
- Redundant Connection
- Accounts Merge
- Graph Valid Tree
- Number of Connected Components in an Undirected Graph

---

## 🏷 Tags

`Union Find` `Graph` `Disjoint Set Union`