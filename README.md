# 6-Bit Kodlama ile Karakter Tabanlı Toplama

Bu proje, Unix öncesi sistemlerin kısıtlı Girdi/Çıktı (I/O) yapısını simüle eden, karakter tabanlı bir toplama uygulamasıdır.  
Program, kullanıcıdan iki tek haneli rakamı ASCII karakteri olarak alır, 6-bit kodlama mantığıyla işler ve sonucu ekrana yazdırır.  
Toplama sonucu 9’u aşarsa, sistem bir hata mesajı verir.

---

## Proje Amacı

Bu çalışma ile:
- ASCII karakter tabanlı veri işleme mantığı kavranır.
- 6-bit kodlama sisteminin 8-bit sisteme göre farkı gözlemlenir.
- Unix öncesi dönemdeki karakter tabanlı I/O sistemleri simüle edilir.

---

## Kullanılan Teknolojiler

- C Programlama Dili  
- GCC Derleyicisi (MinGW / Dev-C++ uyumlu)  
- Terminal tabanlı giriş/çıkış (getchar / printf)

---

## Programın Çalışma Mantığı

1. Kullanıcıdan iki adet tek haneli rakam alınır.  
2. Her rakam karakter olarak ('0'–'9') ASCII üzerinden okunur.  
3. Karakterler 6-bit formatına indirgenir (`ascii & 0x3F` işlemi).  
4. Geri dönüştürülüp toplanır.  
5. Sonuç 9’u geçerse hata mesajı, aksi halde sonuç ekrana yazılır.

---

## Kod (main.c)

```c
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

    n1 = c1 - '0';
    n2 = c2 - '0';

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
