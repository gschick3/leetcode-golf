int cmpfunc (const void * a, const void * b) { return ( *(int*)a - *(int*)b ); }

int bagOfTokensScore(int* tokens, int tokensSize, int power) {
    qsort(tokens, tokensSize, sizeof(int), cmpfunc);
    int bounds[] = {0, tokensSize-1};
    while (bounds[0] < tokensSize && ((bounds[0] > (tokensSize-bounds[1]-1) && bounds[1] > bounds[0]) || tokens[bounds[0]] <= power)) {
        int sell = tokens[bounds[0]] > power;
        power += 2 * sell * tokens[bounds[sell]] - tokens[bounds[sell]];
        bounds[sell] += 1 - 2 * sell;
    }
    return bounds[0] - (tokensSize-bounds[1]-1);
}