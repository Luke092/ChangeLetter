#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* move (char* str){
    int mod = 'z' - 'a';
    size_t len = strlen(str);
    char* res = malloc(sizeof(char) * len);
    for(size_t i = 0; i < len; i ++){
        int offset = str[i] - ((int)'a');
        res[i] = (char)('a' + ((offset + 1) % mod));
    }

    return res;
}

int main(void) {
    printf("%s\n", move("hello"));
    printf("%s\n", move("bye"));
    printf("%s\n", move("welcome"));
    return 0;
}

