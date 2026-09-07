class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int CurrentCount =0;
        int MaxCount =0;
        int n = nums.length;
        for(int i =0;i<n;i++){
            if(nums [i] ==1) {
            CurrentCount++;
            MaxCount = Math.max(CurrentCount,MaxCount);
            }
            else{
                CurrentCount = 0;
            }

        }
        return MaxCount;

    }
}