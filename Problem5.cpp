#include <stdio.h>

int main()
{

    int arr[100] ={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int i;
    for(i = 1; i<=n; i++)
    {
        printf("%d", arr[i]);
        if(i < n) printf(" ");
    }
    printf("\n");



    return 0;
}

