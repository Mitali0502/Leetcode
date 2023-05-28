class Solution {
public:
    int getNextNumber(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while (fast != 1) {
            slow = getNextNumber(slow);
            fast = getNextNumber(getNextNumber(fast));
            if (slow == fast) {
                return false;
            }
        }
        return true;
    }
};
