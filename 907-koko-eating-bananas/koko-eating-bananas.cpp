class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(), piles.end());

        while (start <= end) {
            long long sum = 0;
            int m = start + (end - start) / 2;

            for (int num : piles) {
                sum += num / m;

                if (num % m != 0) {
                    sum++;
                }
            }

            if (sum <= h) {
                end = m - 1;
            }
            else {
                start = m + 1;
            }
        }

        return start;
    }
};