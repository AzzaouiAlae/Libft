#include <string.h>
#include <stdio.h>

int main()
{
    //char *s = NULL;
    //printf("%zu\n",strlen(s));
    //printf("%zu", n);

    void *dst = NULL;
    void *dst_r = NULL;
    void *src = NULL;
    size_t n = 5;

    // act
    dst_r = memcpy(dst, src, n);
    (void)dst;
    (void)dst_r;
}