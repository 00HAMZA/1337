    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    int ft_count_word(const char *s, char c){
        int i;
        int in_word;
        int count;
        in_word = 0;
        count = 0;
        i = 0;
        while (s[i])
        {
            if(s[i] != c && !in_word){
                in_word = 1;
                count ++;
            }else if (s[i] == c)
            {
                in_word = 0;
            }
            i++;  
        }
        return count;
    }
    char ** ft_strsplit(char const *s, char c){
        char **arr;
        int i;
        int j;
        int word_len = 0;
        char *str;
        j = 0;
        i = 0;
        if(s == NULL){
            return NULL;
        }
        arr = (char**)malloc((ft_count_word(s, c) + 1) * sizeof (char*));
        if (arr == NULL){
            return NULL;
        }
            while (s[i])
            {
                if(s[i] != c){
                    word_len = 0;
                while (s[i + word_len] != c && s[i + word_len] != '\0')
                {
                  word_len ++;
                }
                arr[j] = (char*)malloc(word_len + 1);
                if (arr == NULL)
                {
                    return NULL;
                }
                int k = 0;
                while (k < word_len)
                {
                   arr[j][k] = s[i + k];
                   k++;
                }
                arr[j][word_len] = '\0';
                    j++;
                    i += word_len;
                }else{
                    i++;
                }
            }
        arr[j] = NULL;
        return arr;
    }
    int main(){
        char *arr  = "*****hello****world";
        char c = '*';
        char **res = ft_strsplit(arr,c);
        printf("%s %s", res[0], res[1]);
    }