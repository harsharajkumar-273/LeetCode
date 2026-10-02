class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> Set;

        // Put every number into the set
        for (int num : nums) {
            Set.insert(num);
        }

        int longest = 0;

        for (int num : Set) {

            // num is the START of a sequence
            if (!Set.contains(num - 1)) {

                int current = num;
                int count = 1;

                // Keep extending the sequence
                while (Set.contains(current + 1)) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};