public int maxFrequencyElements(int[] nums) {
        return Arrays.stream(nums).mapToObj(x -> Arrays.stream(nums).filter(i -> i == x)).mapToInt(j -> (int)j.count()).map(k -> k == Arrays.stream(nums).mapToObj(n -> Arrays.stream(nums).filter(y -> y == n)).mapToInt(z -> (int)z.count()).max().orElse(0) ? 1 : 0).sum();
}
