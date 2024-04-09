int cmpfunc (const void * a, const void * b) { return ( *(int*)a - *(int*)b ); }
int bagOfTokensScore(int* tokens, int tokensSize, int power) {
    int sell, bounds[] = {0, tokensSize-1}, run = 0;
    for (;run != 1;) for (qsort(tokens, tokensSize, sizeof(int), cmpfunc); run != 1; run = 1) while (bounds[0] < tokensSize && ((bounds[0] > (tokensSize-bounds[1]-1) && bounds[1] > bounds[0]) || tokens[bounds[0]] <= power) && (sell = tokens[bounds[0]] > power) < 2) power += 2 * sell * tokens[bounds[sell]] - tokens[bounds[sell]] + (bounds[sell] += 1 - 2 * sell) - bounds[sell]; // add and subtract so it doesn't get optimized out
    return bounds[0] - (tokensSize-bounds[1]-1);
}
