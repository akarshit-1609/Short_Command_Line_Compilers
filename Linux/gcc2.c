#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "file_checker.h"

int main(int argc, char *argv[])
{
    char inp[20];
    char a[100] = "gcc -o \"";
    char b[50] = ".c\"";
    char bc[3] = "\"";
    char c[50] = "./\"";
    char c1[50] = "./";
    char s[2] = " ";
    if (argc == 1)
    {
        printf(""
               "Introduction:-\n\tgcc2 command make easily compile with run your program by only one command.\n"
               "\tYou can save time in type gcc -o [filename].c [filename] and for run ./[filename]\n"
               "Usage:-\n"
               "\tCopy these executable file and paste in \"/usr/bin\" Folder with root permission.\n"
               "\tMake sure gcc compiler is already set up in you pc.\n"
               "\tOpen Terminal where you saved your C Program.\n"
               "\tType gcc2 [filename without extension] and then press enter.\n"
               "\tNow your program compile and run also.\n\n"
               "I hope this executable file is very usefull for you.\n\n"
               "");
        
    }
    else if (argc == 2)
    {
        char *ar = argv[1];
        strcpy(inp, ar);
        strcat(a, inp);
        strcat(a, bc);
        strcat(a, s);
        strcat(a, bc);
        strcat(a, inp);
        strcat(a, b);
        system(a);
        strcat(c1, inp);
        strcat(c, inp);
        strcat(c, bc);
        if (chfe(c1))
        {
            system(c);
        }
    }

    else if (argc > 2)
    {
        for (int i = 1; i < argc; i++)
        {
            strcat(a, argv[i]);
            if (i != (argc - 1))
            {
                strcat(a, s);
            }
        }
        strcat(a, bc);
        strcat(a, s);
        strcat(a, bc);
        for (int i = 1; i < argc; i++)
        {
            strcat(a, argv[i]);
            if (i != (argc - 1))
            {
                strcat(a, s);
            }
        }
        strcat(a, b);
        system(a);

        for (int i = 1; i < argc; i++)
        {
            strcat(c, argv[i]);
            if (i != (argc - 1))
            {
                strcat(c, s);
            }
        }
        strcat(c, bc);

        for (int i = 1; i < argc; i++)
        {
            strcat(c1, argv[i]);
            if (i != (argc - 1))
            {
                strcat(c1, s);
            }
        }

        if (chfe(c1))
        {
            system(c);
        }
    }

    return 0;
}
