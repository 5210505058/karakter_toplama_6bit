%%writefile main.c //Google Colab, Jupyter Notebook, VS Code Notebook gibi ortamlarda kullanınız,Dev-C++, Code::Blocks, CMD, Visual Studio gibi klasik C derleyicilerinde bu komutu kaldırın.
#include <stdio.h>
int main(void) {
    // Kullanıcıdan alınacak karakterleri tutacak değişkenler
    char c1, c2;

    // 6-bit formatına indirgenmiş değerleri tutacak değişkenler
    unsigned char k1, k2;

    // Karakterlerden elde edilen sayısal değerler ve toplam
    int n1, n2, sum;

    // Kullanıcıdan birinci rakamı iste
    printf("Birinci rakamı gir (0-9): ");
    c1 = getchar();   // getchar() fonksiyonu tek bir karakter okur
    getchar();        // Enter tuşunu temizlemek için ikinci getchar()

    // Kullanıcıdan ikinci rakamı iste
    printf("İkinci rakamı gir (0-9): ");
    c2 = getchar();   // İkinci karakter okunur

    // Girilen karakterlerin geçerli rakam olup olmadığını kontrol et
    // ASCII tablosunda '0' = 48, '9' = 57
    if (c1 < '0' || c1 > '9' || c2 < '0' || c2 > '9') {
        printf("\nHata: Sadece 0-9 arası rakam girebilirsiniz.\n");
        return 1; // Hatalı giriş varsa programdan çık
    }

    // 6-bit kodlama simülasyonu
    // ASCII karakter 8 bittir. 6-bit'e indirmek için 0x3F (00111111) maskesi uygulanır.
    // Bu, karakterin alt 6 bitini korur.
    k1 = c1 & 0x3F;
    k2 = c2 & 0x3F;

    // 6-bit veriden sayısal değer elde etme
    // ASCII tablosunda '0' karakterinin değeri 48'dir.
    // Bu yüzden karakterin sayısal değeri (c1 - '0') farkı ile bulunur.
    n1 = c1 - '0';
    n2 = c2 - '0';

    // Toplama işlemi
    sum = n1 + n2;

    // Sonucun tek haneli olup olmadığını kontrol et
    if (sum > 9) {
        // 9'dan büyükse hata mesajı yazdır ve çık
        printf("\nHata: Sonuç tek haneli değil (%d)\n", sum);
        return 1;
    }

    // Eğer sonuç tek haneli ise ekrana yazdır
    printf("\nSonuç: %d (ASCII karakter olarak '%c')\n", sum, '0' + sum);

    // 6-bit dönüşüm sürecini kullanıcıya göstermek için debug bilgisi
    printf("\n[Debug Bilgisi]\n");
    printf("1. Girdi ASCII: %d, 6-bit: %d\n", c1, k1);
    printf("2. Girdi ASCII: %d, 6-bit: %d\n", c2, k2);

    // Program başarıyla tamamlandı
    return 0;
}
