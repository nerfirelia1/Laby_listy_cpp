/*
//zadanie 1a
#include <stdio.h> // biblioteka z jezyka C
void main() //funkcja bezargumentowa void main, nie zwraca wartosci
{
    printf("Witaj Swiecie"); // funkcja printf z biblioteki jezyka C - stdio.h
}
*/
/*
//zadanie 1b
#include <stdio.h>
int main(int argc, char** argv) // funkcja wywołująca main z dwoma argumentami.
{
 printf("Hello World");
 return 0;
}
*/
/*
//zadanie 1e
#include <stdlib.h>
int main ()
{ system("echo Hello World"); // funkcja systemowa
 return(0);
}
*/
/*
//zadanie 1f
#include <stdlib.h>
#include <string.h>
int main ()
{ char cmd[50]; //wprowadzenie tablicy charow
 strcpy(cmd, "echo Hello World"); // skopiowanie tekstu do tablicy
 system(cmd);
 return(0);
}
*/
/*
//zadanie 1g
#include <stdio.h>
int main() {
 char a[100]={4,1,8,8,11,-68,19,11,14,8,0,0}; //wprowadzenie tablicy charow,
 for(;a[12]<a[4];a[12]++) {
  printf("%c",sizeof(a)+a[a[12]]); //wyswietlnie kolejno litery napisu hello world uzywajac kodow ascii oraz operując na nich matematycznie
 return 0;
}
*/