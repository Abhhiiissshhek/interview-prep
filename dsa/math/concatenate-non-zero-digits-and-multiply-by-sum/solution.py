class Solution(object):
    def sumAndMultiply(self, n):
        """
        :type n: int
        :rtype: int
        """
        # Collect non-zero digits
        non_zero_digits = [d for d in str(n) if d != '0']
        
        # If no non-zero digits exist, return 0
        if not non_zero_digits:
            return 0
        
        # Form the integer x
        x = int("".join(non_zero_digits))
        
        # Calculate the sum of digits
        digit_sum = sum(int(d) for d in non_zero_digits)
        
        return x * digit_sum