class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] answer = new int[n];
        
        answer[0] = 1;
        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        int suffixProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffixProduct;
            suffixProduct *= nums[i];
        }
        
        return answer;
    }
    /*public int[] productExceptSelf(int[] nums) {
        int []ResultNum=new int[nums.length];
        for(int i=0;i< nums.length;i++)
        {
            ResultNum[i]=AllProductExceptThisProduct(nums,i);
        }
        return ResultNum;
        
    }
    
     public int AllProductExceptThisProduct(int[] nums, int index) {
        int Result=1;
        for(int i=0;i<nums.length;i++)
        {
            if(i!=index)
            {
                Result=Result*nums[i];

            }
        }
        return Result;
    }*/
}