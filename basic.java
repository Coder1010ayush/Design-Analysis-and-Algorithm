import java.util.Arrays;

class basic{


    // 509. Fibonacci Number

    // first approach is top to bottom 
    int[] arr = new int[30];
    private int helper(int n){
       
        if(n==0) return 0;
        if(n==1) return 1;
        if(arr[n] != -1) return arr[n];  
        return arr[n] = helper(n-1)+helper(n-2);

    }


    // second approach is bottom to top 
    private int bottom_to_top(int n){
        
        int[] local = new int[31];
        local[0] = 0;
        local[1] = 1;
        for(int i = 2;i<=n;i++){
            local[i] = local[i-1] + local[i-2];
        }

        return local[n];

    }
    public int fib(int n) {
        //return helper(n);
        return bottom_to_top(n);
    }


    // 70. Climbing Stairs
    // approach 1 : top to bottom | exploring all the possible ways to climb on the stairs
    int[] ans = new int[46];
    private int climb(int n){

        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(ans[n] != -1) return ans[n]; 
        int x1 = climb(n-1);
        int x2 = climb(n-2);
        return ans[n] = x1+x2;

    }

    // approach 2 : bottom to up | using base cases build the arrays or fill the all blank and return expected answer

    private int bottom_up(int n){

        int[] local = new int[46];
        local[0] = 0;
        local[1] = 1;
        local[2] = 2;
        
        for(int i = 3;i<=n;i++){
            local[i] = local[i-1]+local[i-2];
        }

        return local[n];
    }

    public int climbStairs(int n) {
       Arrays.fill(ans,-1);
       return climb(n);
    }


    // 1137. N-th Tribonacci Number

    // first approach : top to bottom traversing or exploring all the possible ways and sum it.
    int[] fibo = new int[38];
    private int trifibo(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        if(fibo[n] != -1) return fibo[n];

        return fibo[n] = trifibo(n-1) + trifibo(n-2) +trifibo(n-3);
    }

    // second approach : bottom up or filling the array with the help of base cases
    private int tribonacci_bottom(int n){

        int [] local = new int[38];
        local[0] = 0;
        local[1] = 1;
        local[2] = 1;

        for(int i =3;i<=n;i++){

            local[i] = local[i-1] +local[i-2] + local[i-3];

        }

        return local[n];

    } 

    public int tribonacci(int n) {
        Arrays.fill(fibo, -1);
        return trifibo(n);
    }


    public static void main(String[] args) {
        
    }
}