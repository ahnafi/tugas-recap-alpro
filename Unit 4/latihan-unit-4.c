#include <stdio.h>

int sisi;

int kelilingPersegi(int sisi)
{
    return 4 * sisi;
}

int luasPersegi(int sisi)
{
    return sisi * sisi;
}

int volumeKubus(int sisi)
{
    return sisi * sisi * sisi;
}

int main()
{
    printf("masukan sisi : ");
    scanf(" %d", &sisi);

    printf("keliling persegi : %d \n", kelilingPersegi(sisi));
    printf("luas persegi : %d \n", luasPersegi(sisi));
    printf("volume kubus : %d \n", volumeKubus(sisi));
}