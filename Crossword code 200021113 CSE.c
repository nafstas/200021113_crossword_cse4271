#include<stdio.h>

     char help(void)
    {
    FILE *ptr;
    char ch;
    ptr = fopen("Rules.txt", "r");
    if (NULL == ptr)

    {
        printf("file can't be opened \n");
    }
    else
    {
        printf ("file exist\n");

        while (!feof (ptr))
        {
            ch = fgetc(ptr);
            printf ("%c", ch);
        }
        fclose(ptr);
    }

    }
    typedef struct crossword
    {
        int guidelines;
        int n;
    } crossword;

    int main()

    {
    int m,j,k,guidelines,n,L;
    char str[200]="You were supposed to play this game. why have not you try for it?";;
    printf("----------------\n");
    printf(" Crossword in C\n");
    printf("----------------\n\n");
    printf("1.Begin\n");
    printf("2.Guidelines\n");
    printf("3.Exit\n");
    printf("n: ");
    scanf("%d", &n);
    if(n==2)
    {
        guidelines=help();
    }
    if(n==3)
    {
        printf("%s",str);
    }
    if(n==1)
    {

        char a[9][9] = {"......",
                        "..#.#.",
                        "#...#.",
                        "#..#.#",
                        ".#.#.#",
                        ".#...#",
                        "#.....",
                        ".#..#.",
                        "......",
                       };


        for(m=0; m<8; m++)
        {
            for(j=0; j<8; j++)

            {
                printf("%c",a[m][j]);
            }
            printf("\n");
        }


        a[0][0] = 'L';
        for(k=0; k<64; k++)
        {

            for(m=0; m<8; m++)
            {
                for(j=0; j<8; j++)
                {
                    if(a[m][j]=='L')
                    {
                        if(m-1 >=0)
                        {
                            if(a[m-1][j] == '.')
                            {
                                a[m-1][j] = 'L';
                            }
                        }
                        if(m+1 < 8)
                        {
                            if(a[m+1][j] == '.')
                            {
                                a[m+1][j] = 'L';
                            }
                        }
                        if(j-1 >=0)
                        {
                            if(a[m][j-1] == '.')
                            {
                                a[m][j-1] = 'L';
                            }
                        }
                        if(j+1 < 6)
                        {
                            if(a[m][j+1] == '.')
                            {
                                a[m][j+1] = 'L';
                            }
                        }
                    }
                }
            }

            printf("After one traversing grid become:\n");

            for(m=0; m<8; m++)
            {
                for(j=0; j<8; j++)
                {
                    printf("%c",a[m][j]);
                }
                printf("\n");
            }
            printf("\n");
        }

        printf("after iterating all position the final one become:\n");
        for(m=0; m<8; m++)
        {
            for(j=0; j<8; j++)
            {
                printf("%c",a[m][j]);
            }
            printf("\n");
        }


        if(a[7][7] == 'L')
        {
            printf("\n Yes, it can happen \n");
        }
        else
        {
            printf("\n No, it can't happen \n");
        }
        return 0;
    }
    }
