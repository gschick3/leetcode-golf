public int numJewelsInStones(String jewels, String stones) {
        return (int)stones.chars().filter(x -> jewels.chars().anyMatch(n -> n == x)).count();
}