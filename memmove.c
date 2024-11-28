void *ft_memmove(void *dest,const  void * src, int len){
    char *d;
    char *s;
    int i = 0;
    d = (char *)dest;
    s = (char *)src;
    if(d > s){
    while (len > 0)
    {
        d[len] = s[len];
        len--;

    }
    }else{
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
        
    }
    return dest;
}