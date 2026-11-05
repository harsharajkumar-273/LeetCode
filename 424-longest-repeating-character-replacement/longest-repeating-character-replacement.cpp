class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxfreq = 0;
        int maxlength = 0;
        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'A']++;

            maxfreq = max(maxfreq, freq[s[i] - 'A']);

            while ((i - l + 1) - maxfreq > k) {
                freq[s[l] - 'A']--;
                l++;
            }

            maxlength = max(maxlength, i - l + 1);
        }

        return maxlength;
    }
};