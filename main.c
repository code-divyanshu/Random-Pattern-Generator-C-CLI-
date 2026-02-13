#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void starPyramid(int n);
void numberTriangle(int n);
void invertedStar(int n);
void hollowSquare(int n);
void floydTriangle(int n);

int main() {
    int n;
    
    // Seed random number generator
    srand(time(0));

    printf("===== Random Pattern Generator =====\n");
    printf("Enter number of rows: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid input! Enter positive number.\n");
        return 0;
    }

    int choice = rand() % 5 + 1;

    printf("\nGenerated Pattern Type: %d\n\n", choice);

    switch(choice) {
        case 1:
            starPyramid(n);
            break;
        case 2:
            numberTriangle(n);
            break;
        case 3:
            invertedStar(n);
            break;
        case 4:
            hollowSquare(n);
            break;
        case 5:
            floydTriangle(n);
            break;
        default:
            printf("Error!\n");
    }

    return 0;
}

void starPyramid(int n) {
    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++)
            printf(" ");
        for(int star = 1; star <= (2*i - 1); star++)
            printf("*");
        printf("\n");
    }
}

void numberTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}

void invertedStar(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void hollowSquare(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void floydTriangle(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}
