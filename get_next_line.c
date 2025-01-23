#include "get_next_line.h"
int ft_read(int fd, char **buffer){
    char *temp;
    ssize_t bytes_read = 1;
    char *new_buffer;
    if (fd < 0 || !buffer || BUFFER_SIZE <= 0){
        return -1;
    }
    temp = malloc(BUFFER_SIZE + 1);
    if (!temp){
        return -1;
    }
    while (!ft_strchr(*buffer, '\n'))
    {
        bytes_read = read(fd, temp, BUFFER_SIZE);
        if (bytes_read == -1){
            free(temp);
            return -1;
        }
        if (bytes_read == 0){
            break;
        }
        temp[bytes_read] = '\0';
        new_buffer = ft_strjoin(*buffer, temp);
        if (!new_buffer){
            free(temp);
            return -1;
        }
        free(*buffer);
        *buffer = new_buffer;
    }
    free(temp);
    return 1;
}
char *get_line(char *buffer){
    size_t len = 0;
    size_t i = 0;
    char *allocate;
    if (!buffer || !*buffer){
        return NULL;
    }
    while (buffer[len] != '\n' && buffer[len])
    {
        len++;
    }
    allocate = malloc((len + 2) * sizeof(char));
    if(!allocate){
        return NULL;
    }
    while (buffer[i] != '\n' && buffer[i])
    {
        allocate[i] = buffer[i];
        i++;
    }
    if(buffer[i] == '\n'){
        allocate[i++] = '\n';
    }
    allocate[i] ='\0';
    return allocate;
}
char *update_buffer(char *buffer){
    char *new_position;
    size_t lenght_new_pos;
    char *new_buffer;
    if (!buffer){
        return NULL;
    }
    new_position = ft_strchr(buffer, '\n');
    if (!new_position){
        free(buffer);
        buffer = NULL;
        return NULL;
    }
    lenght_new_pos = ft_strlen(new_position + 1);
    new_buffer = malloc((lenght_new_pos + 1) *sizeof (char));
    if (!new_buffer){
        free(buffer);
        buffer = NULL;
        return NULL;
    }
    ft_strcpy(new_buffer, new_position + 1);
    free(buffer);
    return new_buffer;
}
char *get_next_line(int fd){
    static char *buffer;
    char *line;
    if (fd < 0 || BUFFER_SIZE <= 0){
        return NULL;
    }
    if(!buffer){
        buffer = malloc(1);
        if(!buffer){
            return NULL;
        }
        buffer[0] = '\0';
    }
    if (ft_read(fd, &buffer) == -1){
        free(buffer);
        buffer = NULL;
        return NULL;
    }
    line = get_line(buffer);
    if (!line){
        free(buffer);
        buffer = NULL;
        return NULL;
    }
    buffer = update_buffer(buffer);
    return line;
}
int main() {
    int fd = open("fd.txt", O_RDONLY);  // Open the file for reading
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
         printf("line : %s", line);
         free(line);
    }
    close(fd);
    return 1;
}