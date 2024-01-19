import java.util.Arrays;

public class hous_robber1 {

    // 198. House Robber
    private int[]dp = new int[101];
    private int helper(int[] nums,int idx,int n){

        if(idx>=n) return 0;
        if(dp[idx] != -1) return dp[idx];

        // thief steal - case 1
        int s = nums[idx]+helper(nums,idx+2,n);

        // thief does not steal - case 2
        int r = helper(nums,idx+1,n);

        return dp[idx] = Math.max(s,r);

    }

    public int rob(int[] nums) {
        Arrays.fill(dp,-1);
        int n = nums.length;
        return helper(nums,0,n);
    }


    
    public static void main(String[] args) {
        
    }
}
