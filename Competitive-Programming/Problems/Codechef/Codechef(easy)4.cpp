// ### Repeating Pairs

// You are given a string `S` consisting of lowercase English letters.

// For every two adjacent characters in `S`, consider the pair they form. For example, the string `abca` contains the pairs `ab`, `bc`, and `ca`.

// A pair is called **repeating** if it appears at least twice in the string.

// Find the **number of distinct repeating pairs** in `S`.

// For example, in `ababcabc`, the pair `ab` appears `3` times and `bc` appears `2` times, so the answer is `2`.

// ### Input Format

// - The first line contains the string `S`.

// ### Output Format

// - Print a single integer — the number of distinct consecutive character pairs that appear more than once.

// ### Constraints

// - `1≤∣S∣≤105`
// - `S` consists only of lowercase English letters.

// ### Sample 1:

// Input

// Output

// ```
// ababcabc
// ```

// ```
// 2
// ```

// ### Explanation:

// The consecutive pairs are:

// `ab`, `ba`, `ab`, `bc`, `ca`, `ab`, `bc`

// The pair `ab` appears `3` times and `bc` appears `2` times.

// Therefore, there are **2** distinct repeating pairs.

// ### Sample 2:

// Input

// Output

// ```
// aaaa
// ```

// ```
// 1
// ```

// ### Explanation:

// The consecutive pairs are:

// `aa`, `aa`, `aa`

// Only the pair `aa` appears more than once.

// Therefore, the answer is **1**.



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26][26] = {};

    for (int i = 0; i < (int)s.size() - 1; i++) {
        int a = s[i] - 'a';
        int b = s[i + 1] - 'a';

        freq[a][b]++;
    }

    int ans = 0;

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (freq[i][j] >= 2) {
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}