
#include <stdio.h>
#include <string.h>

int main(void)
{
    char cp1[] = "ailgisasdasdsadasdar";
    char cp2[] = "Bilgileri";
    int ret;

    ret = strcmp(cp1, cp2);
    printf("%d",ret);

    if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
    else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

    return 0;
}


