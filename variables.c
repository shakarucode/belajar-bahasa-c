#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Variable adalah tempat yang dapat digunakan kembali untuk menyimpan sebuah nilai (value)
    // Berperilaku seolah-olah itu nilai yang dikandungnya

    // Masing-masing tipe data memiliki cara unik untuk membuat variabelnya, seperti int untuk angka. (4 bytes)
    int age = 18;
    // %d untuk format specifiers artinya desimal
    printf("Aku berumur %d tahun.\n", age);
    int year = 2025;
    printf("Sekarang Tahun %d\n", year);

    // Floating = bilangan berkoma (4 bytes)
    float ipk = 3.9;
    printf("IPK kamu adalah %.1f\n", ipk);

    // Double = bilangan berkoma cuma lebih banyak lagi (spesifik) (8 bytes)
    double pi = 3.14159265358979;
    printf("Nilai dari pi adalah %.15lf.\n", pi);

    // Char = character atau huruf (hanya menyimpan satu huruf) (1 bytes)
    char grade = 'A';
    printf("Rangking kamu adalah %c.\n", grade);

    // Pada C, tidak ada string, namun untuk membuat variable yang menyimpan lebih dari satu huruf, dapat menggunakan array. (tergantung berapa banyak (size varies))
    char name[] = "Shafwan Khairullah";
    printf("Halo! %s.\n", name);

    // Bool adalah boolean True atau False, ketika ditampilkan pada console akan bernilai 1 untuk True dan 0 untuk False (1 bytes, requires stdbool.h)
    bool sayaGanteng = true;
    printf("%d", sayaGanteng);

    // Bool kebanyakan digunakaan pada if else statement
    if (sayaGanteng)
    {
        printf("Kamu Ganteng!");
    }
    else
    {
        printf("Kamu Jelek!");
    }

    return 0;
}