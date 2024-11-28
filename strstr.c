#include <stdio.h>
char *ft_strstr(char *str, char *find){
int i = 0;
int j = 0;
if(str == NULL || find == NULL ){
    return NULL;
}
if(str[i] == '\0'){
        return NULL;
}
if(find[j] == '\0'){
    return str;
}
while (str[i])
{
    while(str[i + j] && str[i + j] == find[j]){
        j++;
        if(find[j] == '\0'){
            return &str[i];
        }
    }
    i++;
    j = 0;
}   
}
int main(){
    char str[] = "";
    char find[] = "w";
    printf("%s\n", ft_strstr(str, find));
}