int maxFrequencyElements(int* nums, int numsSize) {
    int freq[102] = {0};
    for (int i = 0; i < numsSize; i++) freq[100] += ++freq[nums[i]-1] > freq[100];
    for (int i = 0; i < 100; i++) freq[101] += freq[100] * (freq[i] == freq[100]);
    return freq[101];
}
