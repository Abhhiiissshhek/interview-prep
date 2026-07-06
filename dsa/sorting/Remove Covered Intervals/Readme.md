# 📏 Remove Covered Intervals

> **LeetCode #1288**
>
> Difficulty: 🟡 Medium

---

## 📝 Problem Statement

Given a list of intervals, remove every interval that is completely covered by another interval.

An interval `[a, b)` is covered by `[c, d)` if:

```
c <= a && b <= d
```

Return the number of remaining intervals.

---

## 🧠 Pattern

- Sorting
- Intervals
- Greedy

---

## 💡 Intuition

Comparing every interval with every other interval would require **O(n²)** time.

A better approach is to first **sort the intervals** so that potentially covering intervals appear before the intervals they may cover.

After sorting:

- Keep track of the farthest ending point seen so far.
- If the current interval ends before or at that farthest endpoint, it is completely covered.
- Otherwise, it is a new valid interval.

---

## 🚀 Approach

### Step 1

Sort intervals by:

- Start point in **ascending order**
- End point in **descending order** (important)

Example:

```
[1,8]
[1,5]
[2,6]
[3,4]
```

Sorting by descending end ensures larger intervals come first when start points are equal.

---

### Step 2

Traverse the sorted intervals.

Maintain:

```
maxEnd
```

For every interval:

- If `end <= maxEnd`
  - Current interval is covered.
- Else
  - Count it.
  - Update `maxEnd`.

---

## 🎯 Why Descending End?

Consider:

```
[1,4]
[1,5]
```

If we sort by increasing end:

```
[1,4]
[1,5]
```

The larger interval comes later, making it harder to detect coverage.

Instead, sort as:

```
[1,5]
[1,4]
```

Now the smaller interval is immediately recognized as covered.

---

## ⏱ Complexity

| Complexity | Value |
|------------|-------|
| Time | **O(n log n)** |
| Space | **O(1)** *(excluding sorting)* |

---

## ❌ Mistakes I Made

- Initially sorted both start and end in ascending order.
- Forgot that intervals with the same starting point should be ordered by decreasing end.
- Tried comparing every interval with every other interval, resulting in O(n²).

---

## 📚 Key Learning

- Sorting can transform an interval problem into a simple linear scan.
- When two intervals have the same starting point, placing the larger interval first simplifies coverage detection.
- Many interval problems become much easier after choosing the correct sorting order.

---

## 🎯 Recognition Clues

Consider sorting + greedy when you see:

- Overlapping intervals
- Covered intervals
- Merge intervals
- Remove intervals
- Schedule intervals
- Meeting rooms

---

## 🔗 Related Problems

- Merge Intervals
- Insert Interval
- Non-overlapping Intervals
- Meeting Rooms
- Meeting Rooms II
- Minimum Number of Arrows to Burst Balloons

---

## 🏷 Tags

`Intervals` `Sorting` `Greedy`