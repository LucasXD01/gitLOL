#include <stdio.h>
int main () {
    float vteste;
    printf(" --- TIPO ---|--- BYTES ---\n");
    printf(" char .......: %d bytes\n", sizeof(char));
    printf(" short.......: %d bytes\n", sizeof(short));
    printf(" int.........: %d bytes\n", sizeof(int));
    printf(" float ......: %d bytes\n", sizeof(float));
    printf(" long........: %d bytes\n", sizeof(long));
    printf(" double......: %d bytes\n", sizeof(double));
    printf(" long double.: %d bytes\n", sizeof(long double));
    printf("\nO tamanho de vteste e...: %d \n",sizeof vteste);
    /*
    int a,b,x,y;
    int *z;
    printf ("Definicao dos tipos de variaveis a=%d b=%d x=%d y=%d z=%p \n",a,b,x,y,z);
    a=1;
    b=2;
    x=3;
    y=4;
    z=&a;
    printf ("Definicao dos valores das variaveis a=%d b=%d x=%d y=%d z=%p \n",a,b,x,y,z);
    *z=5;
    printf ("Redefinicao dos valores das variaveis a=%d b=%d x=%d y=%d z=%p \n",a,b,x,y,z);
    printf("sizeof(a)=% \n",sizeof a);  */
}
