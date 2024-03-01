#include <stdio.h>

int main()
{
    int maxArr, value = 0;

    printf("masukan max element : ");
    scanf(" %d", &maxArr);

    int element[maxArr];

    for (int i = 0; i < maxArr; i++)
    {
        printf("masukan element ke %d : ", i);
        scanf(" %d", &element[i]);
    }

    for (int i = 0; i < maxArr; i++)
    {
        value += element[i];
    }

    printf("hasil penjumlahan : %d", value);
}
