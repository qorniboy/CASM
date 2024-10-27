// PracticeProblem2.5

//2.6
// integer
// 100|       1111100100011111000
// float
// 1001010000|111110010001111100000

#include <stdio.h>
#include <string.h>
typedef unsigned char *byte_pointer;

int show_bytes(byte_pointer start, size_t len)
{
    int i;
    //little_endian
    printf("little endian : ");
    for (i = 0; i < len; i++)
        printf("%.2x",start[i]);
    printf("\n");
    
    //big_endian
    printf("big endian : "); // this doesn't output 12 1234 dunno how to solve
    for (i = len - 1; i >= 0; i--)
        printf("%.2x",start[i]);
    printf("\n");

    return 0;
}

void show_int(int x){
    show_bytes( (byte_pointer) &x, sizeof(int) );
}

void show_float(float x){
    show_bytes( (byte_pointer) &x, sizeof(float));
}

void show_pointer(void* x){
    show_bytes( (byte_pointer) &x, sizeof(void*));
}

void inplace_swap(int *x, int *y){
    *y=*x^*y; /*Step1*/
    *x=*x^*y; /*Step2*/
    *y=*x^*y; /*Step3*/
}

int main()
{
    int a = 0x12345678;
    byte_pointer ap = (byte_pointer)&a;
    show_bytes(ap,1);/*A.*/
    show_bytes(ap,2);/*B.*/
    show_bytes(ap,3);/*C.*/

    const char *m="mnopqr";
    show_bytes((byte_pointer)m,strlen(m));
    return 0;
}