#include <stdio.h>
// Memanggil library stdio.h
// library ini digunakan untuk fungsi input dan output
// seperti print() dan scanf().
// printf() - menampilkan informasi ke layar/output

int main()
{
    // fungsi utama program
    // program c akan mulai dijalankan dari fungsi main()

    //=========================
    // 1. deklarasi variabel
    //=========================

    char nama[50];
    // membuat variabel nama bertipe char. /tipe data utuk menyimpan satu karakter
    //[50] berarti dapat menyimpan  maksimal 49 karakter
    // ditambah satu karakter khusus untuk menandai akhir teks

    char buku[100];
    // buat variabel tipe char
    // variabel gunanya untuk meniympan jdul bku
    //[100]berarti dapat meniympan teks hingga 99 karakter

    int jumlahBuku;
    // membuat variabel jumlahbuku tipe int.
    // variabel berguna utuk meniympan jumlah buku
    // yg dipinjam

    int LamaPeminjaman;
    // membuat variabel lamapeminjaman beripe int.
    // variabel digyunakan untuk menyimpan lama peminjaman
    // dalam satuan hari

    //=======================
    // 2. menampilkan judul program
    //=====================

    printf("================================\n");
    // menampilkan garis pembatas pada layar
    //  \n digunakan untuk berpindah ke garis selanjutnyta

    printf("       PEMINJAMAN BUKU PERPUSTAKAAN  \n");
    // menampilkan judul program.

    printf("================================\n");
    // menampilkan garis pembatas bagian bawah
    // wehvcufdyuewfgfguwehcvwehvchubchwbwdhbfhkwcbyfgifcui

    //==========================================
    // 3. input nama peminjaam
    //======================================

    printf("Masukkan nama peminjam : ");
    // menampilkan pesan agar pengguna memasukkan nama

    scanf(" %[^\n]", nama);
    // membaca nama yg dimasukan pengguna

    //===============================
    // 4. input judul buku
    //================================

    printf("Masukkan judul buku     : ");
    // menampilkan pesan agar pengguna memasukkan judul buku

    scanf(" $[^\n]", buku);
    // hdgbycgwghvgwhcvwdhgvcuygwdfuikcegfyuwucgfyutqdgcqweyucgvwigyuyugyufg3ygfcyuguicwgfgywgfgcy
    //  membaca jdul bku yg dimsukkan pngguna

    //================================================
    // 5. input jmlh bku
    //====================================================

    printf("Masukkan jumlah buku  : ");
    // mnampilkn psan agr pngguna mmasukkan
    // jmlh bku yg dpinjam

    scanf("%d", &jumlahBuku);
    // mmbca angka yg dmasukkn pngguna

    //============================================
    // 6. input lma pminjmn
    //===============================================

    printf("Lama peminjaman (hari) : ");
    // mnampilkan psn agr pgguna mmasukkan
    // lma peminjaman dlm satuan hari

    scanf("%d", &LamaPeminjaman);

    // 7.mnampilkan hsl peminjaman
    printf("\n");
    printf("===============================\n");
    printf("        DATA PEMINJAMAN        \n");
    printf("===============================\n");

    // 8. mnampilkn nma peminjm
    printf("Nama Peminjam     : %s\n", nama);

    // 9. mnampilkn jdul bku
    printf("Judul Buku        : %s\n", buku);

    // 10. mnmpilkn jmlh bku
    printf("Jumlah Buku       : %d\n", jumlahBuku);

    // 11. mnmpilkn lma peminjaman
    printf("Lama Peminjaman   : %d hari\n", LamaPeminjaman);
    // menampilkn lma pminjman
    //  %d dignkn krna lamaPeminjaman bertipe int.

    // 12. psan akhir
    printf("===============================\n");
    printf("     DATA BERHASIL DISIMPAN    \n");
    printf("===============================\n");

    // 13. MENGAKHIRI PROGRAM
    return 0;
}