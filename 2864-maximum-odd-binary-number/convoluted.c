char* maximumOddBinaryNumber(char* s){
    int len, zero_count = 0;
    for (len = 0; s[len] != '\0'; len++) zero_count += (s[len] == '0');
    char *new_str = malloc((len--+2) * sizeof(char));
    strcpy(new_str+(len--), "1");
    while (len >= 0) new_str[len--] = (zero_count-- <= 0) + 48;
    return new_str;
}