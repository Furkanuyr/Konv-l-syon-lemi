#include <stdio.h>
#include <stdlib.h>


void konvolusyon(int m, int n, int k, int matris[m][n], int filtre[k][k]) {

    int filtreToplam = 0;

    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            filtreToplam += filtre[i][j];
        }
    }

    if (filtreToplam == 0) filtreToplam = 1; 

    int sonuc[m - k + 1][n - k + 1]; 

   
    for (int i = 0; i <= m - k; i++) {
        for (int j = 0; j <= n - k; j++) {
            int toplam = 0;

           
            for (int a = 0; a < k; a++) {
                for (int b = 0; b < k; b++) {
                    toplam += matris[i + a][j + b] * filtre[a][b];
                }
            }

            sonuc[i][j] = toplam / filtreToplam; 
        }
    }

    
    printf("\nSonuc Matrisi:\n");
    for (int i = 0; i <= m - k; i++) {
        for (int j = 0; j <= n - k; j++) {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, k;

  
    printf("Matrisin satir sayisini giriniz (m): ");
    scanf("%d", &m);
    printf("Matrisin sutun sayisini giriniz (n): ");
    scanf("%d", &n);
    printf("Filtre matrisinin boyutunu giriniz (k): ");
    scanf("%d", &k);

    if (m <= 0 || n <= 0 || k <= 0 || k > m || k > n) {
        printf("Gecersiz matris veya filtre boyutu girdiniz.\n");
        return 1;
    }

    int matris[m][n];
    int filtre[k][k];

 
    printf("\nMatris elemanlarini giriniz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Matrisin %d. satir %d. sutun elemanini giriniz: ", i + 1, j + 1);
            scanf("%d", &matris[i][j]);
        }
    }

  
    printf("\nFiltre elemanlarini giriniz:\n");
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            printf("Filtre matrisinin %d. satir %d. sutun elemanini giriniz: ", i + 1, j + 1);
            scanf("%d", &filtre[i][j]);
        }
    }

  
    konvolusyon(m, n, k, matris, filtre);

    return 0;
}
