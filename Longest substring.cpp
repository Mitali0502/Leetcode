import java.util.HashSet;

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> seen = new HashSet<>();
        int i = 0, j = 0, n = s.length(), ans = 0;
        while (i < n && j < n) {
            if (!seen.contains(s.charAt(j))) {
                seen.add(s.charAt(j++));
                ans = Math.max(ans, j - i);
            } else {
                seen.remove(s.charAt(i++));
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        String s = "abcabcbb";
        Solution solution = new Solution();
        int ans = solution.lengthOfLongestSubstring(s);
        System.out.println(ans); // Output: 3
    }
}
