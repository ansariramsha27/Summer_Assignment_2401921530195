class Solution {
    public boolean isSubsequence(String s, String t) {
        if (s.length() == 0) return true;
        int countS = 0, countT = 0;
        while (indexT < t.length()) {
            if (t.charAt(countT) == s.charAt(countS)) {
                countS++;
                if (countS == s.length()) return true;
            }
            countT++;
        }
        return false;
    }
}
