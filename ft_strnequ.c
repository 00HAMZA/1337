    #include <stdio.h>
    int ft_strnequ(const char *s1, const char *s2, size_t n){
        int i;
        i = 0;
        while (s1[i] && s2[i] && i < n)
        {
            if(s1[i] != s2[i]){
                return 0;
            }
            i++;
        }
        return (i == n || (s1[i] == s2[i]));
    }