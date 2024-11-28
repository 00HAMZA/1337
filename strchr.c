char *ft_strchr(char *str, int chr) {
    int i = 0;
  if ((char)chr == '\0') {
        return &str[i]; 
    }
    while (str[i]) {
        if (str[i] == (char)chr) {
            return &str[i];  
        }
        i++;  
    }
  
    return 0;
}