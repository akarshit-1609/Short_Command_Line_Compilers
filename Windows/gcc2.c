#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <conio.h>

#include "file_checker.h"

int main(int argc ,char *argv[])
{
    char inp[20];
    char a[100] = "gcc \"";
    char b[50] = ".c\" -o \"";
    char bc[3] ="\"";
    char c[50] = ".\\\"";
    char c1[50] = ".\\";
    char d[50] = ".exe\"";
    char d1[50] = ".exe";
    char s[2] = " ";
    if (argc==1){
        printf("""Introduction:-\n\tgcc2 command make easily compile with run your program by only one command.\n"
                 "\tYou can save time in type gcc [filename].c -o [filename] and for run [filename].exe\n"
                 "Usage:-\n"
                 "\tGo to Enviroment Variables. In the System Variable box of the Enviroment Variable dialog box, scroll to path and select it.\n"
                 "\tClick Edit and Type the Directory path of this executable file.\n"
                 "\tMake sure gcc compiler is already set up in you pc.\n"
                 "\tClick Ok on all open windows and then open cmd.exe or window powershell.\n"
                 "\tOpen cmd.exe or window powershell where you saved the C Program.\n"
                 "\tType gcc2 [filename without extension] and then press enter.\n"
                 "\tNow your program compile and run also.\n\n"
                 "I hope this executable is very usefull for you.""");
                 getch();
    }
    else if (argc==2){
        char *ar = argv[1];
        strcpy(inp, ar);
        strcat(a,inp);
        strcat(a,b);
        strcat(a,inp);
        strcat(a,bc);
        system(a);
        strcat(c1, inp);
        strcat(c1, d1);
        if(chfe(c1)) {
            system(c1);
        }
    }
    else if (argc>2){
        for (int i=1; i<argc; i++){
            strcat(a,argv[i]);
            if(i!=(argc-1)){
                strcat(a,s);
            }
        }
        strcat(a,b);
        for (int i=1; i<argc; i++){
            strcat(a,argv[i]);
            if(i!=(argc-1)){
                strcat(a,s);
            }
        }
        strcat(a,bc);
        system(a);
        for (int i=1; i<argc; i++){
            strcat(c,argv[i]);
            if(i!=(argc-1)){
                strcat(c,s);
            }
        }
        strcat(c, d);

        for (int i=1; i<argc; i++){
            strcat(c1,argv[i]);
            if(i!=(argc-1)){
                strcat(c1,s);
            }
        }
        strcat(c1, d1);

        if(chfe(c1)) {
            system(c);
        }
    }
    return 0;
}

