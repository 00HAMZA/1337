char *strncat(char *dest ,  char *src ,  size_t n){
    int i = 0;
    while (dest[i])
    {
        i++;
    }
    int  j = 0;
    while (src[j] && j < n)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}