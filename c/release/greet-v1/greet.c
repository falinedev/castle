// Enter your name on the command-line to print a greeting

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n!", argv[1]);
    return 0;   
}