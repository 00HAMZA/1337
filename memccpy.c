void *memccpy(void *dest, const void *src, int c, int len){
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    unsigned char stop = (unsigned char )c;
    int i = 0;
    while (i < len)
    {
        if(s[i] == stop){
            return d + 1;
        }
        d[i] = s[i];
        i++;
    }
    return dest;

}
