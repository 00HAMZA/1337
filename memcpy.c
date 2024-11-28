void *ft_memcpy(void *dest, const void *src, int len){
    unsigned char *deste = (unsigned char *)dest;
    unsigned char *srce = (unsigned char *)src;
    int i = 0;
    while (i < len)
    {
        deste[i] = srce[i];
        i++;
        
    }
    return dest;

}