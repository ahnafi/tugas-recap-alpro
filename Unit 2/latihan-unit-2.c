#include <stdio.h>

int jmlTransaksi, jmlPengeluaran, totalPengeluaran;

int main()
{

    printf("berapa jumlah transaksi hari ini? : ");
    scanf("%d", &jmlTransaksi);

    if (jmlTransaksi <= 0)
    {
        printf("Tidak ada transaksi hari ini");
    }
    else
    {
        for (int i = 1; i <= jmlTransaksi; i++)
        {
            printf("masukan nominal transaksi ke %d : ", i);
            scanf(" %d", &jmlPengeluaran);
            totalPengeluaran += jmlPengeluaran;
        }
        printf("total pengeluaran hari ini : %d", totalPengeluaran);
    }
}