class Solution {
    public int strStr(String haystack, String needle) {
        if (needle.isEmpty()) {
            return 0;
        }
        int n = haystack.length(), m = needle.length();
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            for (; j < m; j++) {
                if (haystack.charAt(i+j) != needle.charAt(j)) {
                    break;
                }
            }
            if (j == m) {
                return i;
            }
        }
        return -1;
    }
}

public class Main {
    public static void main(String[] args) {
        String haystack = "hello world";
        String needle = "world";
        int expectedIndex = 6;

        Solution solution = new Solution();
        int index = solution.strStr(haystack, needle);
        System.out.println("Index: " + index);

        // Check if the output is correct
        assert index == expectedIndex;
    }
}
