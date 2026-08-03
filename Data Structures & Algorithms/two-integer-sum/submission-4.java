class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> m = new HashMap<>();
        for (int i=0;i<nums.length;i++){
            int d= target -nums[i];
            if(m.containsKey(d)){
               return  new int[]{m.get(d),i};
            }
            m.put(nums[i],i);
        }
        
        return new int[] {};
    }
}
