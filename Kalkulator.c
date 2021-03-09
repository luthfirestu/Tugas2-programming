/* PROGRAM KALKULATOR */

#include <stdio.h>
double f(double fungsi){
    return fungsi; 
}
int pangkat (int m, int n){
    if (m==0) {return 1;
    }
    else {
        return m * pangkat (m, n-1);
    }


}
int main (){
    int op;
    int m;
    int n; 
    int plus; int min; float bagi; int kali;
    char fungsi;
    int a;
    int b; double integral; int t;

    printf ("Pilih operasi yang akan dilakukan : \n");
    printf ("1. penjumlahan\n");
    printf ("2. pengurangan\n");
    printf ("3. perkalian\n");
    printf ("4. pembagian\n");
    printf ("5. perpangkatan\n");
    printf ("6. integral \n");

    printf ("Masukan operator (angka saja): ");
    scanf ("%d", &op);

    switch (op)
    {
    case 1:
        printf ("Masukkan angka : \n");
        scanf ("%d", &m);
        scanf ("%d", &n);
        plus = m + n ;
        printf ("hasil : %d", plus) ;

        break;
    
    case 2:
        printf ("Masukkan angka : \n");
        scanf ("%d", &m);
        scanf ("%d", &n);
        min = m - n ;
        printf ("hasil : %d", min);
        break;

    case 3:
        printf ("Masukkan angka : \n");
        scanf ("%d", &m);
        scanf ("%d", &n);
        kali = m*n ;
        printf ("hasil : %d", kali);
        break;
    
    case 4:
        printf ("Masukkan angka : \n");
        scanf ("%d", &m);
        scanf ("%d", &n);
        bagi = m/n ;
        printf ("hasil : %f", bagi);
        break;

    case 5:
        printf ("Masukkan angka : \n");
        scanf ("%d", &m);
        printf ("Masukkan pangkat : \n");
        scanf ("%d", &n);
        printf ("hasil : %d", pangkat(m,n));
        break;
    case 6 :
        
        printf ("Fungsi y = : \n"); /* format input fungsi y=f(x) */
        scanf ("%s", &fungsi);
        printf ("Masukkan batas atas : \n a : ");
        scanf ("%d", &a);
        printf ("Masukkan batas atas : \n b : ");
        scanf ("%d", &b);
        t = a-b;
        integral = t * (f(a) + f(b))/2;
        printf ("hasil integral : %lf", integral);
        
        break; 

    }   
    return 0;
}