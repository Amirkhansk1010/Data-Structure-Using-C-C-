#include <stdio.h>

int main() {
    char A[] = "Painter";
    char B[] = "Painting";
    int i,j;

    for(i=0,j=0; A[i]!='\0' && B[j]!='\0'; i++,j++) {
        if(A[i]!=B[j]){
            break;
        }
    }

    if(A[i] == B[j]) {
        printf("Both String are same");
    } else if(A[i]<B[j]) {
        printf("First String is smaller");
    } else {
        printf("First String is greater");
    }
}