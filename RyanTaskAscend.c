#include <stdio.h>
#include <string.h>

struct OP {
    char nama[100];
    
} abes[100], temp;

int main() {
    int i, j, x;

    printf("Number of data: ");
    scanf("%d", &x);

    for (i = 0; i < x; i++) {
        printf("Enter Name %d: ", i + 1);
        scanf("%s", abes[i].nama);
    }

    for (i = 0; i < x - 1; i++) {
        for (j = 0; j < x - i - 1; j++) {
            if (strcmp(abes[j].nama, abes[j + 1].nama) > 0) {
                temp = abes[j];
                abes[j] = abes[j + 1];
                abes[j + 1] = temp;
            }
        }
    }

    printf("\nSorting Result:\n");
    for (i = 0; i < x; i++) {
        printf("Name : %s\n", abes[i].nama);
    }

    return 0;
}
