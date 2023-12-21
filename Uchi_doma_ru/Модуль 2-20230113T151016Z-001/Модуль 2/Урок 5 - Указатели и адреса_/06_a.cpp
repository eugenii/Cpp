#include <stdio.h>
int main()
{
    char letters[27];
    char *p;
    int x;
    p = letters;
    for(x=0;x<26;x++)
    {
        *p=x+'A';
        p++;
    }
    p = letters;
    for(x=0;x<26;x++)
    {
       printf("%c ", *p);
        p++;
    }
    return 0;
}