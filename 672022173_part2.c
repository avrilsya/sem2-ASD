#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n;
    int i, j, k, x, p;
    while (1)
    {
        printf("==========================\n");
        puts("\tTugas Quiz ASD");
        printf("==========================\n");
        puts("1. Level 1");
        puts("2. Level 2");
        puts("3. Level 3");
        puts("4. Exit");
        printf("==========================\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:;

            printf("Masukkan angka : ");
            scanf("%d", &x);
            for (i = 0; i <= x + 1; i++)
            {
                p = i;
                for (j = 0; j < i; j++)
                {
                    printf("%3d", p - 1);
                    p++;
                }
                printf("\n");
            }
            puts("");
            system("pause");
            system("cls");
            getch();
            break;
            
        case 2:

            printf("Masukkan angka : ");
            scanf("%d", &k);
            for (int i = 1; i <= k; i++)
            {
                for (int j = i; j <= i * i; j++)
                {
                    printf("%d", j);
                    printf(" ");
                    j = j + i - 1;
                }
                printf("\n");
            }
            puts("");
            system("pause");
            system("cls");
            getch();
            break;

        case 3:;

            int n, a = 1;
            printf("Masukkan Bilangan (max 9): ");
            scanf("%d", &n);
            n = n - 1;
            for (int i = 1; i <= n + 1; i++)
            {
                for (int j = i; j <= n; j++)
                {
                    printf(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    if (k < i)
                        printf("%d", a++);
                    else if (k == i)
                        printf("%d", a);
                    else
                        printf("%d", --a);
                }
                printf("\n");
            }

            for (int i = n; i >= 1; i--)
            {
                for (int j = n; j >= i; j--)
                {
                    printf(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    if (k < i)
                        printf("%d", a++);
                    else if (k == i)
                        printf("%d", a);
                    else
                        printf("%d", --a);
                }
                printf("\n");
            }
            puts("");
            system("pause");
            system("cls");
            getch();
            break;

        case 4:

            printf("Thank You!");
            return 0;
            break;
        }
    }
}
