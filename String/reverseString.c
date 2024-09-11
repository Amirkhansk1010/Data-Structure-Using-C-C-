#include <stdio.h>

void reverseMethod1(char[]);
void reverseMethod2(char[]);

int main() {
    char A[] = "python";
    char B[] = "Java Programing";
    reverseMethod1(A);
    reverseMethod2(B);
}

void reverseMethod1(char A[]) {
    char B[7];
    int i,j;
    for(i=0; A[i]!='\0'; i++) {}
    i=i-1;

    for(j=0; i>=0; i--, j++) {
        B[j]=A[i];
    }
    B[j]='\0';
    printf("The reverse String is: %s",B);
}

void reverseMethod2(char B[]) {
    char t;
    int i,j;
    
    for(j=0; B[j]!='\0'; j++) {}
    j=j-1;

    for(i=0; i<j; i++, j--) {
        t=B[i];
        B[i]=B[j];
        B[j]=t;
    }

    printf("\nThe reverse String is: %s",B);
}