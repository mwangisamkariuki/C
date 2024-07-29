// Online C compiler to run C program online
#include <stdio.h>

void print_row(int height);

int main() {
    int height;
    printf("Height:");
    scanf("%d",&height);
    // printf("you entered %d",height);
    for (int i=0;i<height;i++)
    {
        print_row(i+1);
    }
    return 0;
}

void print_row(int height)
{
    for (int i = 0; i < height; i++)
    {
    printf("#");
    }
    printf("\n");
}
