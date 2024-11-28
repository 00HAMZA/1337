char *ft_strrchr(char *str, int chr){
    int i = 0;
    while (str[i])
    {
       i++;
    } 
    while (str[i] >= 0)
    {
        if(str[i] == chr){
            return &str[i];
        }
        i--;
    }
    if(chr == '\0'){
        return &str[i];
    }
    return 0;
}