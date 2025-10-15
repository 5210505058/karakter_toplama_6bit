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
