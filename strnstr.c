char *ft_strnstr(char *str, char *find, int n){
    int i = 0;
    int j = 0;
    if(find[j] == '\0'){
        return str;
    }
    while (str[i] && i < n)
    {
        j = 0;
        while (str[i + j] == find[j] && (i + j) < n)
        {
            j++;
            if(find[j] == '\0'){
                return &str[i];
            }
        }
        i++;
    }
    return 0 ;  
}