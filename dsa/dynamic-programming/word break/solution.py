class Solution(object):
    def wordBreak(self, s, wordDict):
        words = set(wordDict)
        lens = {len(w) for w in wordDict}

        n = len(s)
        dp = [False] * (n + 1)
        dp[0] = True

        for i in range(1, n + 1):
            for l in lens:
                if i >= l and dp[i - l] and s[i - l:i] in words:
                    dp[i] = True
                    break

        return dp[n]