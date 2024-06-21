#include "../Include/token.h"

#include <emscripten.h>
#include <string.h>

EMSCRIPTEN_KEEPALIVE
int add_numbers(int a, int b)
{
    return a + b;
}

char *generate_token()
{
    const char *token = "123456789";
    char *p_token = (char *)malloc(strlen(token) + 1);
    strcpy(p_token, token);
    return p_token;
}

void free_ptr(void *ptr)
{
    free(ptr);
}