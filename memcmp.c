int ft_memcmp(const void *str1, const void *str2, int len){
   unsigned char *s1;
   unsigned char *s2;
    int i ;
    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    i = 0;
    while (s1[i] && s2[i] && i < len)
    {
        if(s1[i] != s2[i]){
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}