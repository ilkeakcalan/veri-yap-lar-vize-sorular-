#include <stdio.h>

void birlestir(int dizi1[], int lenght1, int dizi2[], int lenght2, int birlestirilmis[]) {
    int i = 0, j = 0, k = 0;
    while (i < lenght1 && j < lenght2) {
        if (dizi1[i] < dizi2[j]) {
           sayýlar[k++] = dizi1[i++];
        } else {
            sayýlar[k++] = dizi2[j++];
        }
    }
    while (i < len1) {
       sayýlar [k++] = dizi1[i++];
    }
    while (j < len2) {
      sayýlar[k++] = dizi2[j++];
    }
}

int main() {
    int dizi1[] = {1, 3, 5, 7, 9};
    int lenght1 = sizeof(dizi1) / sizeof(int);
    int dizi2[] = {2, 4, 6, 8, 10};
    int lenght2 = sizeof(dizi2) / sizeof(int);
    int sayýlar[len1 + len2];
    degisim(dizi1, lenght1, dizi2, lenght, sayýlar);
    for (int i = 0; i < lenght1 + lenght2; i++) {
        printf("%d ", sayýlar[i]);
    }
    printf("\n");
    return 0;
}
