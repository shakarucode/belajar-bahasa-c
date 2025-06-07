#include <stdio.h>
#include <stdbool.h>
// Format Specifiers merupakan sebuah token spesial yang diawali dengan simbol "%", diikuti dengan karakter yang menentukan tipe data dan pengubah opsional seperti (width, precision, flags) yang mengontrol bagaimana data tersebut ditampilkan.
int main()
{
    // int nama_variabel untuk mendeskripsikan variabel yang akan dibuat adalah integer (bilangan bulat)
    int integer = 18;
    printf("Pada tahun ini, saya berumur %d tahun.", integer);

    float floating_number = 3.8;
    double double_number = 3.141592653589793;
    char character = '$';
    char string[] = "Shafwan";
    return 0;
}