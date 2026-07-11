# 📝 Word Break

> **LeetCode #139**
>
> Difficulty: 🟡 Medium

---

## 📝 Problem Statement

Given a string `s` and a dictionary of strings `wordDict`, determine whether `s` can be segmented into a sequence of one or more dictionary words.

Each word in the dictionary can be used multiple times.

Return `true` if such a segmentation exists, otherwise return `false`.

---

## 🧠 Pattern

- Dynamic Programming
- 1D DP
- String

---

## 💡 Intuition

We need to determine whether every prefix of the string can be formed using words from the dictionary.

Instead of trying every possible combination repeatedly, we remember previously solved prefixes.

Let

```
dp[i]
```

represent:

> Can the first `i` characters of the string be segmented?

If we already know

```
dp[j] = True
```

and

```
s[j:i]
```

is a valid dictionary word,

then

```
dp[i] = True
```

---

## 🚀 Approach

### Step 1

Convert the dictionary into a HashSet.

This allows O(1) word lookup.

---

### Step 2

Create a DP array.

```
dp[0] = True
```

because an empty string can always be segmented.

---

### Step 3

For every position `i`

check every previous position `j`.

If

```
dp[j] == True
```

and

```
s[j:i]
```

exists in the dictionary,

then

```
dp[i] = True
```

---

## Example

Input

```
s = "leetcode"

wordDict =

["leet","code"]
```

DP progression

```
""      ✅

"leet"  ✅

"leetcode" ✅
```

Final answer

```
True
```

---

## 🎯 DP State

```
dp[i]

↓

Can first i characters be segmented?
```

Transition

```
dp[i] = True

if

dp[j]

AND

s[j:i] exists in dictionary
```

---

## ⏱ Complexity

| Complexity | Value |
|------------|-------|
| Time | O(n²) |
| Space | O(n) |

where `n` is the length of the string.

---

## ❌ Mistakes I Made

- Forgot to initialize `dp[0] = True`.
- Used a list instead of a HashSet for dictionary lookup.
- Didn't stop checking once a valid split was found.

---

## 📚 Key Learning

- Dynamic Programming works well when larger answers depend on smaller subproblems.
- Converting the dictionary to a HashSet significantly improves lookup performance.
- Defining the correct DP state is the most important step.

---

## 🎯 Recognition Clues

Think about **1D Dynamic Programming** when a problem asks:

- Can a string be segmented?
- Can you reach the end?
- Prefix-based decisions
- Boolean feasibility
- Break a string into valid pieces

---

## 🧩 Interview Insight

The hardest part is identifying the DP state.

Instead of asking:

> "How do I split the string?"

ask:

> "Can the first `i` characters be formed?"

Once this state is defined, the transition becomes natural by checking every previous split point.

---

## 🔗 Related Problems

- Word Break II
- Decode Ways
- Coin Change
- Perfect Squares
- Combination Sum IV
- Partition Equal Subset Sum

---

## 🏷 Tags

`Dynamic Programming` `1D DP` `String`