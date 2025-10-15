%%writefile main.c //Google Colab, Jupyter Notebook, VS Code Notebook gibi ortamlarda kullanınız,Dev-C++, Code::Blocks, CMD, Visual Studio gibi klasik C derleyicilerinde bu komutu kaldırın.
#include <stdio.h>

int main(void) {
    char c1, c2;
    unsigned char k1, k2;
    int n1, n2, sum;

    printf("Birinci rakamı gir (0-9): ");
    c1 = getchar();
    getchar();

    printf("İkinci rakamı gir (0-9): ");
    c2 = getchar();

    if (c1 < '0' || c1 > '9' || c2 < '0' || c2 > '9') {
        printf("\nHata: Sadece 0-9 arası rakam girebilirsiniz.\n");
        return 1;
    }

    k1 = c1 & 0x3F;
    k2 = c2 & 0x3F;

    
    n1 = (c1 - '0');
    n2 = (c2 - '0');

    sum = n1 + n2;

    if (sum > 9) {
        printf("\nHata: Sonuç tek haneli değil (%d)\n", sum);
        return 1;
    }

    printf("\nSonuç: %d (ASCII karakter olarak '%c')\n", sum, '0' + sum);

    printf("\n[Debug Bilgisi]\n");
    printf("1. Girdi ASCII: %d, 6-bit: %d\n", c1, k1);
    printf("2. Girdi ASCII: %d, 6-bit: %d\n", c2, k2);

    return 0;
}
