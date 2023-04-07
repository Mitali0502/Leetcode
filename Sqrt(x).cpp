class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) {
            return x; // Base case: return x if it's 0 or 1
        }
        int left = 1; // Initialize left pointer to 1
        int right = x; // Initialize right pointer to x
        while (left <= right) {
            int mid = left + (right - left) / 2; // Calculate midpoint
            if (mid > x / mid) {
                right = mid - 1; // Move right pointer to mid-1 if mid^2 is greater than x
            } else {
                left = mid + 1; // Move left pointer to mid+1 if mid^2 is less than or equal to x
            }
        }
        return right; // Return right pointer rounded down to the nearest integer
    }
};
