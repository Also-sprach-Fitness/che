#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megopolis,CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
    show_n_char('*',WIDTH);
    putchar('\n');
    show_n_char(SPACE,(WIDTH - strlen(NAME))/2);
    printf("%s\n",NAME);
    show_n_char(SPACE,(WIDTH - strlen(ADDRESS))/2);
    printf("%s\n",ADDRESS);
    show_n_char(SPACE,(WIDTH - strlen(PLACE))/2);
    printf("%s\n",PLACE);
    show_n_char('*',WIDTH);
}

void show_n_char(char ch,int num)
{
    int count;
    for(count = 0; count < num; count++)
        putchar(ch);
}