void *ft_memset(void *ptr, int c, int len){
    unsigned char *p = ptr;
    while (len--)
    {
        *p =  c;
        p++;
    }
    return (ptr);
}