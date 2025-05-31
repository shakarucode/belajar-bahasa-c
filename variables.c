#include <stdio.h>

int main()
{
    // Variable adalah tempat yang dapat digunakan kembali untuk menyimpan sebuah nilai (value)
    // Berperilaku seolah-olah itu nilai yang dikandungnya
    // Masing-masing tipe data memiliki cara unik untuk membuat variabelnya, seperti int untuk angka.
    int age = 18;
    // %d untuk format specifiers artinya desimal
    printf("Aku berumur %d tahun.", age);
    int year = 2025;
    printf("Sekarang Tahun %d", year);

    return 0;
}