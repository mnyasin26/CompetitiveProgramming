#include <stdio.h>

int main() {
    int masukan;

    scanf("%d", &masukan);

    if ((masukan >= 0) && (masukan <= 100))
    {
        printf("YA\n");
    }
    else
    {
        printf("TIDAK\n");
    }
    
    return 0;

}