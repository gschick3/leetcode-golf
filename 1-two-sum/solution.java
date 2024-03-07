public int[] twoSum(int[] nums, int target) {
    return IntStream.range(0, nums.length).mapToObj(num -> new int[] {num, IntStream.range(num+1, nums.length).filter(x -> nums[x] == (target - nums[num])).findFirst().orElse(-1)}).filter(x -> x[1] != -1).findFirst().orElse(new int[] {-1, -1});
}
